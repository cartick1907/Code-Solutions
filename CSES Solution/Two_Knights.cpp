#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll n)
{
    ll total = n * n * (n * n - 1) / 2;
    cout << total - 4 * (n - 1) * (n - 2) << endl;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << 0 << endl;
    for (ll i = 2; i <= n; i++)
    {
        solve(i);
    }
    return 0;
}