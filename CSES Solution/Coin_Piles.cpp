#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            swap(a, b);

        if (a > 2 * b)
        {
            cout << "NO" << endl;
        }

        else if ((a + b) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}