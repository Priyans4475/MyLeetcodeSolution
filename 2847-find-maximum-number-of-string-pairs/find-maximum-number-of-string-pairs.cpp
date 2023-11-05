class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        set<string>st;
      int cnt=0;
        for(int i=0;i<words.size();i++)
        {  string s=words[i];
           string a=s;
           reverse(a.begin(),a.end());
            if(st.find(a)!=st.end())
            {
                cnt++;
            }

            st.insert(s);
        }

        return cnt;
    }
};