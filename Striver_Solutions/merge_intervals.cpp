class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        for (int i = 0; i < n; i++)
        {
            if (ans.empty() || ans.back()[1] < intervals[i][0])
            {
                vector<int> pus = {
                    intervals[i][0],
                    intervals[i][1]};
                ans.push_back(pus);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};