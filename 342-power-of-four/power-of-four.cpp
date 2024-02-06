class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<4)
        {
            if(n==1)
            return true;
            else
            return false;
        }
        if(n%4!=0)
        return false;

        else
        return isPowerOfFour(n/4);

    }
};