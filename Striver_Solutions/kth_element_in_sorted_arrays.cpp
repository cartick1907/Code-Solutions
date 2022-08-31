//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int kthElement(int nums1[], int nums2[], int n, int m, int k)
    {
        if (n > m)
            return kthElement(nums2, nums1, m, n, k);
        int l = max(0, k - m), r = min(k, n);
        while (l <= r)
        {
            int mid = (l + r) / 2;
            double l1, l2, r1, r2;
            int cut = k - mid;
            // cout << mid << " " << cut << endl;
            if (mid == 0)
            {
                l1 = INT_MIN;
            }
            else
            {
                l1 = nums1[mid - 1];
            }
            if (cut == 0)
            {
                l2 = INT_MIN;
            }
            else
            {
                l2 = nums2[cut - 1];
            }
            if (mid == n)
            {
                r1 = INT_MAX;
            }
            else
            {
                r1 = nums1[mid];
            }
            if (cut == m)
                r2 = INT_MAX;
            else
                r2 = nums2[cut];
            // cout << l1 << " " << l2 << " " << r1 << " " << r2 << endl;
            if (l1 <= r2 && l2 <= r1)
            {
                return max(l1, l2);
            }
            if (l1 > r2)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];

        Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k) << endl;
    }
    return 0;
}
// } Driver Code Ends