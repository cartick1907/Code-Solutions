class Solution
{
public:
    bool check(string a, int i, int j)
    {
        while (i <= j)
        {
            if (a[i] != a[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(string s, vector<vector<string>> &ans, vector<string> temp, int i)
    {
        if (i == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int idx = i; idx < s.size(); idx++)
        {
            if (check(s, i, idx))
            {
                temp.push_back(s.substr(i, idx - i + 1));
                solve(s, ans, temp, idx + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> temp;
        solve(s, ans, temp, 0);
        return ans;
    }
};