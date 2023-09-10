class Solution {
public:
    void recurr(int o,int c,int n,string s,vector<string>&ans)
    {     

      //  O->>>Open parentheses
      //  c->>>Closed parentheses
         if(o==n && c==n)
         {ans.push_back(s);
         return;}

         if(o<n)
         {
           recurr(o+1,c,n,s+"(",ans);
         }
         if(c<n && c<o)
         {
           recurr(o,c+1,n,s+")",ans);
         }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";

        recurr(0,0,n,s,ans);
        return ans;
    }
};