class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        // Your code here
        map<int, int> freq;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum == 0)
            {
                maxi = i + 1;
            }
            else
            {
                if (freq.find(sum) != freq.end())
                {
                    maxi = max(maxi, i - freq[sum]);
                }
                else
                    freq[sum] = i;
            }
        }
        return maxi;
    }
};