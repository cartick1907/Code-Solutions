#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {

        ll r, c;
        cin >> r >> c;

        ll ans;

        if (r > c)
        {

            ll rval;
            if (r % 2 == 0)
            {
                rval = r * r;
                ans = rval - c + 1;
            }
            else
            {
                rval = r * r - 2 * r + 2;
                ans = rval + c - 1;
            }
        }
        else
        {

            ll cval;
            if (c % 2 != 0)
            {
                cval = c * c;
                ans = cval - r + 1;
            }
            else
            {
                cval = c * c - 2 * c + 2;
                ans = cval + r - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}