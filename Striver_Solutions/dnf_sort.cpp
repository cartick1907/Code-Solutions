class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int mid = 0;
        int low = 0;
        int high = nums.size() - 1;
        while (1)
        {
            if (mid > high)
            {
                break;
            }
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                {
                    high--;
                }
            }
        }
    }
};