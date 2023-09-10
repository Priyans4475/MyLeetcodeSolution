class Solution {
public:
      vector<vector<int>>ans;
    void recurr(vector<int>& candidates, int target,int i,vector<int>&temp)
      {
                if(target==0)
                {ans.push_back(temp);
                return;}

                if(target<0)
                return;

                if(i==candidates.size())
                    return ;

                recurr(candidates,target,i+1,temp);

                temp.push_back(candidates[i]);
                recurr(candidates,target-candidates[i]
                              ,i,temp);         
                
                temp.pop_back();

          
      }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       
        vector<int>temp;
       
         recurr(candidates,target,0,temp);

         return ans;

        
    }
};