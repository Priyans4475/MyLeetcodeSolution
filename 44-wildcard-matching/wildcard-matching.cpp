class Solution {
public:
   bool helper(int i, int j, string& s, string& p, vector<vector<int>>&dp){
        if(i == 0 && j == 0)return true;
        if(i == 0){
            for(int k = 0 ; k <= j - 1 ; k++)
                if(p[k] != '*')return false;
            return true;
        }
        if(j == 0 && i != 0)return false;
        if(dp[i][j] != -1)return dp[i][j];
		
        // Matching case 
        // If string and pattern matches or the pattern contains a question mark
        if(s[i - 1] == p[j - 1] || p[j - 1] == '?')return dp[i][j] = helper(i - 1, j - 1, s, p, dp);
        
        // For star pattern
        if(p[j - 1] == '*')return dp[i][j] = helper(i - 1, j, s, p, dp) || helper(i, j - 1, s, p, dp);
        
        // Not Matching Case 
        return dp[i][j] = false;
        
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.size() + 1, vector<int>(p.size() + 1, -1));
        return helper(s.size(), p.size(), s, p, dp);
    }
};