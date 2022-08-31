class Solution
{
public:
    int findPivot(int s, int e, vector<int> &nums)
    {

        while (s < e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
        }
        return s;
    }
    int FindTarget(int s, int e, vector<int> &nums, int target)
    {

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            cout << mid;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int len = nums.size();
        int pivot = findPivot(0, len - 1, nums);

        if (target >= nums[pivot] && target <= nums[len - 1])
            return FindTarget(pivot, len - 1, nums, target);
        else
            return FindTarget(0, pivot - 1, nums, target);
    }
};