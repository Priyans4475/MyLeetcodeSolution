class Solution {
public:
    bool ispallindrm(string s,int start,int end)
    {
          while(start<=end)
          {
              if(s[start++]!=s[end--])
              return false;
          }
          return true;
    }
    void recurr(string s,vector<string>&temp,vector<vector<string>>&ans,int ind)
    {
        if(ind==s.size())
        {ans.push_back(temp);
        return;}

        for(int i=ind;i<s.size();++i)
        { if(ispallindrm(s,ind,i))
            {temp.push_back(s.substr(ind,i-ind+1));
            recurr(s,temp,ans,i+1);
            temp.pop_back();}
        }

    }
    
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        recurr(s,temp,ans,0);
        return ans;
    }
};