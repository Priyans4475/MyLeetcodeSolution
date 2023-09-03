class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int cnt=0;
        int ans=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=day)
            {
                cnt++;
            }
            else
            {
                ans+=cnt/k;
                cnt=0;
            }
        }
        ans+=cnt/k;
        if(ans>=m)
        return true;
        else
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int count=0;
        int ans;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
       long long val = m * 1ll * k * 1ll;
        if(val>n)
        return -1;
        while(low<=high)
        {
            int mid=(low+high)/2;

            if(possible(bloomDay,mid,m,k)==true)
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