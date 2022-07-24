#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[1001][100001];
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    // memset(dp, 0, sizeof(dp));
    vector<int> p(n, 0);
    vector<int> w(x, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (j >= p[i - 1])
            {
                dp[i][j] = max(w[i - 1] + dp[i - 1][j - p[i - 1]], dp[i - 1][j]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][x];
    return 0;
}
