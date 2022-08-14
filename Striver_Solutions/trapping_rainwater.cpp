class Solution
{
public:
    int trap(vector<int> &nums)
    {
        int n = nums.size();
        int dpl[n], dpr[n];
        memset(dpl, 0, sizeof(dpl));
        memset(dpr, 0, sizeof(dpr));
        int buffer = 0;
        for (int i = 0; i < n; i++)
        {
            buffer = max(buffer, nums[i]);
            dpl[i] = max(buffer, nums[i]);
        }
        buffer = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            buffer = max(buffer, nums[i]);
            dpr[i] = max(buffer, nums[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += min(dpl[i], dpr[i]) - nums[i];
        }
        return ans;
    }
};