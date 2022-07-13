#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string q, e;
    char single = '1';
    map<char, int> freq;
    // cout << s.size();
    for (auto x : s)
        freq[x]++;
    int flag = 0;
    for (auto x : freq)
    {
        // cout << x.first << " " << x.second << endl;
        if (x.second % 2 == 1 && flag == 0)
        {
            flag = 1;
            single = x.first;
        }
        else if (x.second % 2 == 1 && flag == 1)
        {
            flag = -1;
            break;
        }
    }
    if (flag == -1)
        cout << "NO SOLUTION";
    else
    {
        int red = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == single && red == 1)
            {
                red = 0;
                continue;
            }
            if (i % 2 != 0)
                q.push_back(s[i]);
            else
                e.push_back(s[i]);
        }
        // cout << q.size() << " " << e.size() << endl;
        // cout << q << " " << e << " " << single << endl;
        if (single != '1')
            q += single;
        reverse(e.begin(), e.end());
        q += e;
        cout << q;
    }
    return 0;
}