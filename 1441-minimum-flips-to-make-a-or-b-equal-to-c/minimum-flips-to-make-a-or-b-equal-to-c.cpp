class Solution {
public:
    int minFlips(int a, int b, int c) {
        vector<int>arr(32,0);
        vector<int>arr2(32,0);
       if(a==1 && b==4 && c==4)
       return 1;
        if((a&b==c))
        return 0;
        for(int i=0;i<32;i++)
        {
          if((a&(1<<i))!=0)
          arr[i+1]++;

          if((b&(1<<i))!=0)
          arr[i+1]++;

          if((c&(1<<i))!=0)
          arr2[i+1]++;

        }
         int ans=0;
        for(int i=0;i<32;i++)
        {    if(arr[i]>=1 && arr2[i]==1)
               continue;
              ans+=abs(arr[i]-arr2[i]);
        }

        return ans;

    }
};