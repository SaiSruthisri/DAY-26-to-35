class Solution {
public:
    double myPow(double x, long int n) {
        double ans=1;
        long int k=n;
        if(n==0) return 1;
        if(n<0)
        {
             k=n*(-1);
        }
        //logic starts from here (bit manipulation)
        while(k>0)
        {
            if(k%2!=0)
            {
                ans*=x;
                k--;
            }
            else
            {
                k/=2;
                x=x*x;
            }
        }
        //logic ends here
        if(n<0)
        {
            ans=1/ans;
        }

        return ans;
    }
};
