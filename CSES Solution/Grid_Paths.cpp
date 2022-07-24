#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[1001][1001];
int mod = 1e9 + 7;
int solve(vector<vector<char>> &grid, int n, int r, int c)
{
    if (grid[r][c] == '*')
        return 0;
    if (r == n - 1 && c == n - 1)
        return 1;
    if (dp[r][c] != -1)
        return dp[r][c] % mod;
    if (r < n - 1 && c < n - 1)
        return dp[r][c] = ((solve(grid, n, r + 1, c) % mod) + (solve(grid, n, r, c + 1) % mod)) % mod;
    else if (r == n - 1)
        return dp[r][c] = solve(grid, n, r, c + 1) % mod;
    else
        return dp[r][c] = solve(grid, n, r + 1, c) % mod;
}
int main()
{

    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    // for (auto x : grid)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    cout << solve(grid, n, 0, 0);
    return 0;
}
