class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int row;
        int flag = 0;
        if (matrix[0][0] > target)
            return false;
        if (matrix.size() == 1)
        {
            row = 0;
            goto check;
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == target)
                return true;
            else if (matrix[i][0] > target)
            {
                row = i - 1;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            row = matrix.size() - 1;
    check:
        int low = 0, high = matrix[0].size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            // cout<<mid<<endl;
            // cout<<matrix[row][mid]<<endl;
            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] > target)
                high = mid - 1;
            else
            {
                // cout<<"else";
                low = mid + 1;
            }
        }
        return false;
    }
};