class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        
        
        int res=0;
      
        for(int i=0;i<k;i++)
        {
            res+=arr[i];
        }
      int sum=res;
       for(int i=k-1;i>=0;i--)
       {
           sum-=arr[i];
           sum+=arr[n-k+i];

           res=max(res,sum);
       }
        return res;
    }
};