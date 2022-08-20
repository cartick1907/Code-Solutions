class Solution
{
public:
    void solve(vector<int> nums, int target, int i, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (i == nums.size() || target == 0)
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if (nums[i] <= target)
        {
            temp.push_back(nums[i]);
            solve(nums, target - nums[i], i, ans, temp);
            temp.pop_back();
        }
        solve(nums, target, i + 1, ans, temp);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<vector<int>> ans;
        vector<int> temp = {};
        solve(candidates, target, 0, ans, temp);
        return ans;
    }
};