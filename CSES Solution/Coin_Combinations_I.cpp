#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<int> coins(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    ll dp[x + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    int mdd = 1e9 + 7;
    for (ll i = 1; i <= x; i++)
    {
        for (auto j : coins)
        {
            if (j <= i)
            {
                (dp[i] += dp[i - j]) %= mdd;
            }
        }
    }
    cout << dp[x];
    return 0;
}
