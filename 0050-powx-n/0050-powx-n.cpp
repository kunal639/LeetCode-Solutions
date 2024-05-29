class Solution {
public:
    double myPow(double x, int n) 
    {
        double res = 1.0;
        long long pr = abs(n);
        while(pr>0)
        {
            if(pr&1)
            {
                res = res*x;
            }
            x = x*x;
            pr = pr>>1;
        }
        if(n>0)
        {
            return res;
        }
        else
        {
            return 1.0/res;
        }
    }
};