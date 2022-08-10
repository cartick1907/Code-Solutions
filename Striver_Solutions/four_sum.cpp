class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        long long a, b, c, d;
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vector<int> buffer;
                a = nums[i];
                b = nums[j];
                long long tea = target - a - b;
                int k = j + 1;
                int l = n - 1;
                while (k < l)
                {
                    // cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                    if (nums[k] + nums[l] == tea)
                    {
                        buffer.push_back(nums[i]);
                        buffer.push_back(nums[j]);
                        buffer.push_back(nums[k]);
                        buffer.push_back(nums[l]);
                        ans.insert(buffer);
                        buffer.clear();
                        k++;
                        l--;
                    }
                    else if (nums[k] + nums[l] > tea)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
        vector<vector<int>> hadto;
        for (auto x : ans)
            hadto.push_back(x);
        return hadto;
    }
};