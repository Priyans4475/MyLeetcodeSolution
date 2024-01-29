class Solution {
public:
    int gcd(int a,int b)
    {
          if(b==0)
          return a;
          else
          return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int a=INT_MIN,b=INT_MAX;
        for(auto i:nums)
        {
            a=max(a,i);

            b=min(b,i);

           
        }
         return gcd(a,b);
    }
};