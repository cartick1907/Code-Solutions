#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        cout << a << " " << c << endl;
        TOH(n - 1, b, a, c);
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    TOH(n, 1, 2, 3);
    return 0;
}