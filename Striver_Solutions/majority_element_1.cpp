class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int ans = nums[0];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum == 0)
            {
                ans = nums[i];
            }
            sum += (nums[i] == ans) ? 1 : -1;
        }
        return ans;
        return 0;
    }
};