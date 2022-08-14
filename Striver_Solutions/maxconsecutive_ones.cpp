class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int ctr = 0;
        for (auto x : nums)
        {
            if (x == 1)
            {
                ctr++;
                ans = max(ans, ctr);
            }
            else
            {
                ctr = 0;
            }
        }
        return ans;
    }
};