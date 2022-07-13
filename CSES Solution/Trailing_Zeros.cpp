#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll ans = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        ans += n / i;

    cout << ans;
    return 0;
}