class Solution {
public:
    int reverse(int x) {
      
        long long  temp=x;
        
        long long rev=0,lastdigit;
        while(temp!=0)
        { 
            
        lastdigit=temp%10;
        rev=rev*10+lastdigit;
        temp=temp/10;
        

        }
        if(temp<0)
        {
            return rev*(-1);}
        
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return (int)rev;
        
    }
};