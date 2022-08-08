class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        int ans;
        fast = nums[0];
        while (1)
        {
            if (slow == fast)
                return slow;
            slow = nums[slow];
            fast = nums[fast];
        }
    }
};