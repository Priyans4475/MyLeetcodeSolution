class Solution {
public:
      void f(vector<int>&nums,int ind,vector<int>&temp,      vector<vector<int>>&ans
  )
        {
          ans.push_back(temp);
          for(int i=ind;i<nums.size();i++)
         { if(    i!=ind   &&  nums[i]==nums[i-1]) continue;
                                                                      temp.push_back(nums[i]);
                                                                      f(nums,i+1,temp,ans);
                                                                      temp.pop_back();}
        
          }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
         vector<int>temp;
         sort(nums.begin(),nums.end());
         f(nums,0,temp,ans);
         return ans;
         
        
    }
};