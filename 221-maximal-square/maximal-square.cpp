class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int maxSize = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == '1') {
                    dp[i][j] = 1;
                    if(i > 0 && j > 0)
                        dp[i][j] += min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                    maxSize = max(maxSize, dp[i][j]);
                }
            }
        }
        
        return maxSize * maxSize;
    }
};
