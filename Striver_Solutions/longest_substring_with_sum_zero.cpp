class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        map<char, int> pos;
        int l = 0, r = 0;
        int ans = 0;
        while (r < s.size())
        {

            if (pos.find(s[r]) != pos.end())
            {
                l = max(pos[s[r]] + 1, l);
            }
            pos[s[r]] = r;
            int len = r - l + 1;
            ans = max(ans, len);
            r++;
        }
        return ans;
    }
};