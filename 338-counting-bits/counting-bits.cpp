class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        { int cnt=0;
        int x=i;
            while(x>0)
            {
              if((x & 1)!=0)
             { 
                 cnt++;
                 
             }
             x = x>>1;
            }
           ans.push_back(cnt);
            
        }
        //  ans.push_back(1);
        return ans;
    }
};