class Solution {
public:
    double power(double x,int n)
    {
        if (n == 0)
            return 1;
        if (n%2 == 1 || n%2 == -1)
        {
            return x*power(x,n-1);
        }
        double y = power(x,n/2);
        return y*y;
    }
    double myPow(double x, int n) {
        if (x == 1.00000)
            return x;
        else if (x == -1.00000)
        {
            if (abs(n)%2 == 0)
                return -x;
            else
                return x;
        }
        if (n>=0)
        {
            return power(x,n);
        }
        else
        {
            if (n == -2147483648)
                return 0;
            return 1/power(x,-n);
        }
    }
};