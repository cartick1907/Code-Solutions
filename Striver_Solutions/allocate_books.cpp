#include <bits/stdc++.h>
int solve(vector<int> &A, int pages, int students)
{
    int cnt = 0;
    int sumAllocated = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (sumAllocated + A[i] > pages)
        {
            cnt++;
            sumAllocated = A[i];
            if (sumAllocated > pages)
                return false;
        }
        else
        {
            sumAllocated += A[i];
        }
    }
    if (cnt < students)
        return true;
    return false;
}

int Solution::books(vector<int> &A, int B)
{

    int n = A.size();
    if (n < B)
        return -1;
    // sort(A,A+n);
    int l = *min_element(A.begin(), A.end());
    int r = accumulate(A.begin(), A.end(), 0);
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (solve(A, mid, B))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}
