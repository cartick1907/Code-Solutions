#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if ((n * (n + 1) / 2) % 2 != 0)
        cout << "NO";
    else
    {
        set<int> a, b;
        a.insert(n);
        b.insert(n - 1);
        ll asum = n, bsum = n - 1;
        for (int i = n - 2; i > 0; i--)
        {
            // cout<<"asum = "<<asum<<endl<<"bsum = "<<bsum<<endl;
            if (asum > bsum)
            {
                bsum += i;
                b.insert(i);
            }
            else if (asum < bsum)
            {
                asum += i;
                a.insert(i);
            }
            else
            {
                asum += i;
                a.insert(i);
            }
        }
        if (asum == bsum)
        {
            cout << "YES" << endl;
            cout << a.size() << endl;
            for (auto t : a)
            {
                cout << t << ' ';
            }
            cout << endl;
            cout << b.size() << endl;
            for (auto t : b)
            {
                cout << t << ' ';
            }
        }
        else
            cout << "NO";
    }

    return 0;
}
