class Solution {
public:
int fun2(vector<int>mp){
    int k=INT_MAX;
    for(auto it:mp){
        if(it<=k &&it>=1)k=it;
    }
    return k;
}
int fun(vector<int>mp){
    int k=INT_MIN;
    for(auto it:mp){
        if(it>=k)k=it;
    }
    return k;
}
    int beautySum(string s) {
       int sum=0;
       for(int i=0;i<s.length();i++){
           vector<int>mp(27);
           for(int j=i;j<s.length();j++){
             mp[s[j]-'a']++;
             int mx=fun(mp);
             int mn=fun2(mp);
             sum+=mx-mn;
        
            
           }
       }
       return sum;
    }
};