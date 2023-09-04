class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      vector<int>ans;
      set<int>s;
      int res=0;
      int n=arr.size();
      int x=*max_element(arr.begin(),arr.end());
      for(int i=0;i<n;i++)
      {s.insert(arr[i]);}
      int count=0;
      for(int j=1;j<=x+k;j++)
      {
        if(s.find(j)==s.end())
             {
               count++;
               if(count==k)
               res=j;
             }
      }
      return res;
        
    }
};