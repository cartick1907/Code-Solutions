class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        multimap<int, int> poss;
        for (int i = 0; i < nums.size(); i++)
        {
            pair<int, int> ins(nums[i], i);
            poss.insert(ins);
        }
        vector<int> ans;
        for (auto x : nums)
        {
            int diff = target - x;
            cout << x << " " << diff << endl;
            auto self = poss.find(x);
            int one = self->second;
            poss.erase(self);
            auto itr = poss.find(diff);
            if (itr != poss.end())
            {
                ans.push_back(one);
                ans.push_back(itr->second);
                break;
            }
        }
        return ans;
    }
};