class Solution {
public:
// long long int fast(long long int x,int n)
//   {
//       long long int ans=1;
//         while(n>0)
//         {
//             if((n&1)!=0)
//             ans=ans*x;

//              x=x*x;
//         n=n>>1;
//         }
//         return ans%1337;
//   }
    int superPow(int a, vector<int>& b) {
       int n = 0;
        for (int i = 0; i < b.size(); i++) {
            if(n==114)
            {
                n = (n * 10 + b[i]);
            }else{
                n = (n * 10 + b[i])%1140;
            }

        }
        int ans =1;
        a=a%1337;
      while(n>0)
      {
          if((n&1)!=0)
          {
              ans =(ans*a)%1337;
          }
          a=(a*a)%1337;
          n=n>>1;
      }
      return ans ;
      
    }
};