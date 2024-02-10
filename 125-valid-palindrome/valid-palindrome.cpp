class Solution {
public:
    bool pali(string s)
    
    {  int n=s.length()/2;
    int i=0;
    int j=s.length()-1;
          while(n--)
        {if(s[i++]!=s[j--])
        return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string s1="";

        for(auto i:s)
        {
            if(!isalnum(i))
            continue;
            else
            s1+=tolower(i);
        }
          cout<<s1<<endl;
        return pali(s1);
    }
};