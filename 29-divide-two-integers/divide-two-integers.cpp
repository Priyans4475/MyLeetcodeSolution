class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;

        long long sign=(divisor>0)^(dividend>0)==0?1:-1;

        long long divi=labs(dividend);
         long long div=labs(divisor);
         int res=0;

         while(div<=divi)
         {
             long long temp=div,multi=1;
             while(temp<<1 <=divi)
             {
                 temp=temp<<1;
                 multi=multi<<1;
             }

             divi=divi-temp;
             res=res+multi;
         }

         return sign*res;

    }
};