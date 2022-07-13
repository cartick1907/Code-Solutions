#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(string ip, set<string> &ans, int l, int r)
{
    if (l == r)
    {
        ans.insert(ip);
    }
    else
    {
        for (int i = 0; i <= r; i++)
        {
            swap(ip[l], ip[i]);
            solve(ip, ans, l + 1, r);
            swap(ip[l], ip[i]);
        }
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    set<string> ans;
    string op = "";
    solve(s, ans, 0, s.size() - 1);
    cout << ans.size() << endl;
    for (auto x : ans)
        cout
            << x << endl;

    return 0;
}