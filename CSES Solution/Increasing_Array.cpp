#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> num;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        num.push_back(x);
    }
    ll add = 0;
    for (int j = 0; j < n - 1; j++)
    {

        // cout<<num[j]<<" "<<num[j+1]<<'\n';

        if (num[j] > num[j + 1])
        {
            ll diff = num[j] - num[j + 1];
            add += diff;
            num[j + 1] += diff;
        }
    }
    cout << add;
}