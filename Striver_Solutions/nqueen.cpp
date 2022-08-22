class Solution
{
public:
    vector<vector<string>> ans;

    bool isSafe(vector<string> &board, int row, int col)
    {
        int n = size(board);
        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == 'Q')
                return false;
            if (row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q')
                return false;
            if (row - i >= 0 && col + i < n && board[row - i][col + i] == 'Q')
                return false;
        }
        return true;
    }
    void solve(vector<string> board, int row)
    {
        if (row == board.size())
        {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < board.size(); i++)
        {
            if (isSafe(board, row, i))
            {
                board[row][i] = 'Q';
                solve(board, row + 1);
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {

        vector<string> board(n, string(n, '.'));
        solve(board, 0);

        return ans;
    }
};