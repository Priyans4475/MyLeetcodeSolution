class Solution {
public:
bool check2(pair<int, int> left, pair<int, int> right) {
        
    return left.first <= right.first && left.first >= right.second;
}
    int findMinArrowShots(vector<vector<int>>& v1) {
        vector<pair<int,int>> v;
        int n=v1.size();
        for(auto it:v1){
            
            v.push_back({it[1],it[0]});
        }
         

        sort(v.begin(),v.end()); 
        for(auto it:v){
            
           cout<<it.first<<" "<<it.second<<endl;
        }


        int cnt=1;
        int i=0,j=1;
        while(i<n && j<n){
          if(check2(v[i],v[j]))
          {
          
          j++;}
          else
          {cnt++;
          i=j;
          j++;}
        }

        return cnt;
    }
};