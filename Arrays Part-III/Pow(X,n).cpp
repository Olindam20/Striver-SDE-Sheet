class Solution {
public:
    double myPow(double x, int n) {
         long N=n;
        double ans=1.0;
        if(n<0) N=-1*N;
        
        while(N)
        {
            if(N%2==1)
            {
                ans=ans*x;
                N-=1;
            }
            
            else
            {
                x=x*x;
                N/=2;
            }
        }
        if(n<0)
        {
            ans=double(1.0)/double(ans);
        }
        return ans;
    }
};