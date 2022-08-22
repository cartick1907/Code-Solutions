void solve(vector<int> nums, vector<vector<int>> &ans, int l, int r)
{
    if (l == r)
    {
        ans.push_back(nums);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(nums[l], nums[i]);

            solve(nums, ans, l + 1, r);

            swap(nums[l], nums[i]);
        }
    }
}
class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> ans;
        solve(nums, ans, 0, nums.size() - 1);
        return ans;
    }
};