class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            vector<int> buffer;
            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] > 0)
                {
                    k--;
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                {
                    j++;
                }
                else
                {
                    buffer.push_back(nums[i]);
                    buffer.push_back(nums[j]);
                    buffer.push_back(nums[k]);
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;
                    j++;
                    k--;
                    ans.push_back(buffer);
                    buffer.clear();
                }
            }
        }
        return ans;
    }
};