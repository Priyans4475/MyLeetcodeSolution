class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(auto it:nums)
        {
            p.push(it);
        }
        int x=k-1;
        while(x--)
        {
            p.pop();
        }

        return p.top();
    }
};