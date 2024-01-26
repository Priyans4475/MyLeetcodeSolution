class Solution {
public:
  double fast(double x,int n)
  {
      double ans=1;
        while(n>0)
        {
            if((n&1)!=0)
            ans=ans*x;

             x=x*x;
        n=n>>1;
        }
        return ans;
  }
    double myPow(double x, int n) {
       
  if(x==1)
  return 1;

  double ans=fast(x,abs(n));
  if(n<0)
  return 1/ans;
  return ans;
       

    }
};