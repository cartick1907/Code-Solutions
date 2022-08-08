vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int xorr = 0;
    int n = A.size();
    for (auto x : A)
    {
        // cout<<x<<" ";
        xorr ^= x;
    }
    // cout<<xorr<<endl;
    for (int i = 1; i <= n; i++)
    {
        xorr ^= i;
    }
    // cout<<xorr<<endl;
    int setbit = xorr & ~(xorr - 1);
    // cout<<setbit<<endl;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (setbit & A[i])
            x ^= A[i];
        else
            y ^= A[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (setbit & i)
            x ^= i;
        else
            y ^= i;
    }
    for (auto z : A)
    {
        if (z == x)
            return {x, y};
    }

    return {y, x};
}
