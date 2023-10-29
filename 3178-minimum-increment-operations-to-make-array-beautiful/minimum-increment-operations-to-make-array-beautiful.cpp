class Solution {
public:
    long long solve(vector<int>& nums,int idx,long long k,vector<long long> &dp){
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        long long ans=1e14;
        for(int d=0 ; d<3 ; d++){
            ans=min(ans,max(0LL,k-(long long)nums[idx-d])+solve(nums,idx+3-d,k,dp));
        }
        return dp[idx]=ans;
    }
    
    long long minIncrementOperations(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long> dp(n+1,-1);
        return solve(nums,2,k,dp);
    }
};