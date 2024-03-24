class Solution {
public:
    int minOperations(int k) {

        int mini=INT_MAX;
      
        for(int i=1;i<=k;i++)
        mini=min(i-1+((k+i-1)/i-1),mini);

       

        return mini;
    }
};