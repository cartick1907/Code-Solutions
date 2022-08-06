class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int idx1 = -1;
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                idx1 = i - 1;
                break;
            }
        }
        if (idx1 == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (nums[i] > nums[idx1])
                {
                    swap(nums[i], nums[idx1]);
                    break;
                }
            }
            reverse(nums.begin() + idx1 + 1, nums.end());
        }
    }
};