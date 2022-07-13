#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;

    while (1)
    {

        if (n == 1)
        {

            cout << n;
            break;
        }
        else
            cout << n << " ";

        if (n % 2 == 0)
        {

            n /= 2;
        }
        else
        {

            n = (n * 3) + 1;
        }
    }

    return 0;
}