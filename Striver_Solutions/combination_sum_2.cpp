class Solution
{
public:
    map<int, int> chek;
    void solve(vector<int> &nums, int target, int i, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (i == nums.size() || target == 0)
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        for (int idx = i; idx < nums.size(); ++idx)
        {
            if (idx > i && nums[idx] == nums[idx - 1])
                continue;
            if (nums[idx] > target)
                break;
            temp.push_back(nums[idx]);
            solve(nums, target - nums[idx], idx + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        // set<vector<int>> hehe;
        vector<int> temp = {};
        solve(candidates, target, 0, ans, temp);

        return ans;
    }
};