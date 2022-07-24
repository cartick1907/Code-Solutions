#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    int mdd = 1e9 + 7;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                (dp[i] += dp[i - j]) %= mdd;
            }
        }
    }
    cout << dp[n];
    return 0;
}
