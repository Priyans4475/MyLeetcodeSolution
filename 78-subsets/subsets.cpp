class Solution {
public:
vector<vector<int>>ans;
    void f(vector<int>temp,vector<int>& nums,int i)
    {
      if(i==nums.size())
      {ans.push_back(temp);
      return;}
      

      temp.push_back(nums[i]);
      f(temp,nums,i+1);
      temp.pop_back();
      f(temp,nums,i+1);
      return;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        f(temp,nums,0);
        
        return ans;
    }
};