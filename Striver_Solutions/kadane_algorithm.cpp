class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int a = 0, b = -10e5;
        for (auto x : nums)
        {
            a = max(x, a + x);
            b = max(a, b);
        }
        return b;
    }
};