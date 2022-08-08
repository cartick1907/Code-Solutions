#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void mergeback(vector<int> &nums, int left, int mid, int right)
{
    // cout << left << " " << mid << " " << right << endl;
    vector<int> l, r;
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
    // for (auto x : nums)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
}
void mergesort(vector<int> &nums, int left, int right)
{
    int mid = (left + right) / 2;
    if (left >= right)
        return;
    mergesort(nums, left, mid);
    mergesort(nums, mid + 1, right);
    mergeback(nums, left, mid, right);
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums = {6, 6, 1, 3, 2, 4};
    mergesort(nums, 0, nums.size() - 1);
    for (auto x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
