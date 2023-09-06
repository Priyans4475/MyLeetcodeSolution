class Solution {
public:
      bool f(vector<int>& arr, int mid,int m,int n)
{   
    int student=1;
    int pagesize=0;
    for(int i=0;i<n;i++)
    {
         if(pagesize+arr[i]>mid)
         {
             student++;
             pagesize=arr[i];
         }
         else
         pagesize+=arr[i];
    }
    return (student<=m);
}
    int splitArray(vector<int>& arr, int m) {
      int n=arr.size();
          if(m>n)
        return -1;
        int low=INT_MIN;
        int ans=0;
         for(int i=0;i<n;i++)
         {
             if(arr[i]>low)
             {
                 low=arr[i];
             }
         }
    int high=0;
    for(int i=0;i<n;i++)
    {
        high+=arr[i];
    }

    while(low<=high)
    {
        int mid=(low+high)/2;
    
        if( f(arr,mid,m,n))
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