#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> digits;
    int x = digits.size();
    sort(digits.begin(), digits.end());
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        int z = i;
        while (z > 0)
        {
            digits.push_back(z % 10);
            z /= 10;
        }
        for (auto x : digits)
        {
            if (x <= i)
                dp[i] = min(dp[i], dp[i - x] + 1);
        }
        digits.clear();
    }

    cout << dp[n];
    return 0;
}
