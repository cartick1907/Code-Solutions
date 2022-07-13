#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<vector<char>> arr;
bool issafe(vector<vector<char>> arr, int x, int y, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    if (arr[x][y] == '*')
        return false;
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == '1')
            return false;
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == '1')
            return false;
        row--;
        col++;
    }
    for (int i = x; i >= 0; i--)
    {
        if (arr[i][y] == '1')
            return false;
    }
    return true;
}

void chess(vector<vector<char>> &arr, int x, int n, int &ctr)
{
    if (x >= n)
    {
        ctr++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        // cout << x << " " << i << endl;
        if (issafe(arr, x, i, n))
        {
            // cout << "safe" << endl;
            arr[x][i] = '1';
            chess(arr, x + 1, n, ctr);
            arr[x][i] = '.';
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 8; i++)
    {
        vector<char> ins;
        for (int j = 0; j < 8; j++)
        {
            char x;
            cin >> x;
            ins.push_back(x);
        }
        arr.push_back(ins);
    }
    int ctr = 0;
    chess(arr, 0, 8, ctr);
    cout << ctr;

    return 0;
}