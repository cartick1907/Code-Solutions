class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> temp;
        int n = nums1.size();
        int m = nums2.size();
        if (n > m)
        {
            temp = nums1;
            nums1 = nums2;
            nums2 = temp;
            swap(n, m);
        }
        int median = (n + m + 1) / 2;
        double l = 0;
        double r = n;
        cout << n << " " << m << endl;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            double l1, l2, r1, r2;
            int cut = median - mid;
            cout << mid << " " << cut << endl;
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
            cout << l1 << " " << l2 << " " << r1 << " " << r2 << endl;
            if (l1 <= r2 && l2 <= r1)
            {
                if ((n + m) % 2 == 0)
                {
                    return (max(l1, l2) + min(r1, r2)) / 2;
                }
                else
                    return max(l1, l2);
            }
            if (l1 > r2)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return 0;
    }
};