#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool canplace(vector<ll> arr, int cows, int dist)
{
    int last = arr[0];
    int ctr = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - last >= dist)
        {
            ctr++;
            last = arr[i];
        }
    }
    if (ctr >= cows)
        return true;
    return false;
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long n, c;
        cin >> n >> c;
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        int l = 1;
        int r = nums[n - 1] - nums[0];
        ll mid = 0;
        while (l <= r)
        {
            // cout << mid << endl;
            mid = (l + r) / 2;
            if (canplace(nums, c, mid))
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << r << endl;
    }
    return 0;
}
