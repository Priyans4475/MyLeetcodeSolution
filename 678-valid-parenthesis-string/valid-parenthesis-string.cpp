class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int star=0;
        int closed=0;
        if(s.length()==1 && s[0]!='*')
        return 0;
        for(int i=0;i<s.length();i++)
{
     if(s[i]=='(' )
     {open++;
     star++;}
     else if(s[i]==')')
     {
         open--;
         star--;
     }
     

     else if(s[i]=='*' )
     {open--;
     star++;}

     if(star<0)
     return false;
     
    open=max(0,open);
    }
   

    return open==0;}
};