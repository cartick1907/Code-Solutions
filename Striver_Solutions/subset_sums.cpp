//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int> &arr, int n, vector<int> &ans, int curr)
    {
        if (n == 0)
        {
            ans.push_back(curr);
            return;
        }
        // cout<<n<<endl;
        int s1 = curr, s2 = curr;
        s1 += arr[n - 1];
        solve(arr, n - 1, ans, s1);
        solve(arr, n - 1, ans, s2);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        solve(arr, N, ans, 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends