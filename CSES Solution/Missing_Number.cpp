#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    ll osum = (n * (n + 1)) / 2;

    cout << osum - sum;

    return 0;
}