class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
              int ans = 0;
       int n=nums.size();
        for(int i=0;i<32;i++){
                int count = 0;
                for(int j=0;j<n;j++){
                // at each position find the set bit
                if(nums[j] & (1<<i)) count++;
            }
             ans+=count*(n-count);
        }
        return ans;
    }
};