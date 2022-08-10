class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        set<int> buffer;
        for (auto x : nums)
        {
            buffer.insert(x);
        }
        int prev = *buffer.begin();
        buffer.erase(buffer.begin());
        if (buffer.size() == 0)
        {
            return 1;
        }
        int curr = 0;
        int ans = INT_MIN;
        // cout<<prev<<endl;
        for (auto x : buffer)
        {
            // cout<<x<<endl;
            if (x - prev <= 1)
            {
                if (curr == 0)
                    curr = 2;
                else
                    curr++;
                ans = max(curr, ans);
            }
            else
                curr = 0;
            prev = x;
        }
        if (ans == INT_MIN)
            return 1;
        return ans;
    }
};