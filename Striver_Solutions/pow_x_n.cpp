class Solution
{
public:
    double myPow(double x, int nn)
    {
        if (nn == 0)
            return 1;
        if (x == 0)
            return 0;
        long n = nn;
        int flag = 0;
        if (n < 0)
        {
            flag = -1;
            n *= -1;
        }
        double ans = 1;
        while (n > 0)
        {
            // cout<<ans<<" "<<x<<endl;
            if (n % 2 == 0)
            {
                n /= 2;
                x *= x;
            }
            else
            {
                n--;
                ans *= x;
            }
        }
        double inv = 1;
        if (flag == -1)
            return inv / ans;
        else
            return ans;
    }
};