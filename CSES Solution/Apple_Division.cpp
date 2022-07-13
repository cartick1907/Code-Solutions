#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(vector<ll> n, ll a, ll b, vector<ll> &ans)
{

    if (n.size() == 0)
    {
        ans.push_back(abs(a - b));
        return;
    }
    else
    {
        ll x = a + n[0];
        ll y = b + n[0];
        n.erase(n.begin());
        solve(n, x, b, ans);
        solve(n, a, y, ans);
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> nums;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        nums.push_back(x);
    }
    if (n & 1)
        nums.push_back(0);
    vector<ll> ans;
    solve(nums, 0, 0, ans);
    cout << *min_element(ans.begin(), ans.end());
    return 0;
}