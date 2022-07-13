#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<string> solve(int n)
{
    if (n <= 0)
        return {"0"};
    if (n == 1)
        return {"0", "1"};
    vector<string> s = solve(n - 1);
    vector<string> main;
    for (int i = 0; i < s.size(); i++)
    {
        string x = s[i];
        main.push_back("0" + x);
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        string x = s[i];
        main.push_back("1" + x);
    }
    return main;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> ans = solve(n);
    for (auto x : ans)
        cout << x << endl;
    return 0;
}