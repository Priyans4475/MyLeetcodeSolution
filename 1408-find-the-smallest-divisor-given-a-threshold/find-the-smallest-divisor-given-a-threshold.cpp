class Solution {
public:
    bool f(vector<int>& nums, int threshold,int mid)
    { int n= nums.size();
      int ans=0;
      for(int i=0;i<n;i++)
      {
         ans += ceil((double)(nums[i]) / (double)(mid));
      }
      if(ans<=threshold)
      return true;
      else
      return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
      
      int high=*max_element(nums.begin(),nums.end());
      int low=1;

      int ans=0;
      while(low<=high)
      { int mid=(low+high)/2;
        if(f(nums,threshold,mid)==true)
        {
          ans=mid;
          high=mid-1;
        }
        else
        low=mid+1;
      }
      return ans;
        
    }
};