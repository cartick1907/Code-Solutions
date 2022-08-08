#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int mergeback(vector<int> &nums, int left, int mid, int right)
{
    // cout << left << " " << mid << " " << right << endl;
    vector<int> l, r;
    int ans = 0;
    l = r = nums;
    int i, j, k = left;
    i = left;
    j = mid + 1;
    while (i <= mid && j <= right)
    {
        // cout << i << " " << j << " " << k << endl;
        if (l[i] < r[j])
        {
            nums[k] = l[i];
            i++;
            k++;
        }
        else
        {
            nums[k] = r[j];
            j++;
            k++;
            ans += (mid - i);
        }
    }
    while (i <= mid)
    {
        nums[k] = l[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        nums[k] = r[j];
        k++;
        j++;
    }
    return ans;
    // for (auto x : nums)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
}
int mergesort(vector<int> &nums, int left, int right)
{
    int mid = (left + right) / 2;
    int ans = 0;
    if (left >= right)
        return 0;
    ans += mergesort(nums, left, mid);
    ans += mergesort(nums, mid + 1, right);
    ans += mergeback(nums, left, mid, right);
    return ans;
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums = {6, 6, 1, 3, 2, 4};
    cout << mergesort(nums, 0, nums.size() - 1);

    return 0;
}
