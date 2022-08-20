class Solution
{
public:
    void solve(vector<int> nums, int index, vector<int> output, set<vector<int>> &temp)
    {
        if (index >= nums.size())
        {
            temp.insert(output);
            return;
        }

        solve(nums, index + 1, output, temp);

        output.push_back(nums[index]);

        solve(nums, index + 1, output, temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        set<vector<int>> temp;

        vector<int> output;

        int index = 0;

        solve(nums, index, output, temp);

        for (auto i : temp)
        {
            ans.push_back(i);
        }

        return ans;
    }
};