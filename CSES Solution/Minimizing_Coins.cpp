#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> dp(1000001, 1e9);
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= nums[j])
            {
                dp[i] = min(dp[i], dp[i - nums[j]] + 1);
            }
        }
    }
    cout << (dp[x] == 1e9 ? -1 : dp[x]);

    return 0;
}
