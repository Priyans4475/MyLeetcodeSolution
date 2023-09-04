class Solution {
public:
       void dfs(int i,int j,int n, int m, vector<vector<char>>&mat,vector<vector<int>>&vis)
    {
        vis[i][j]=1;
        int delrow []={-1,0,+1,0};
        int delcol []={0,+1,0,-1};
        
        for(int k=0;k<4;k++)
        {
            int nrow=i+delrow[k];
            int ncol=j+delcol[k];
             
             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O')
             {
                  dfs(nrow,ncol,n,m,mat,vis);
             }
        }
        
    }
    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
            // this is for first col
            if(!vis[0][j] && mat[0][j]=='O')
            dfs(0,j,n,m,mat,vis);
            
            // This is for last col
            if(!vis[n-1][j] && mat[n-1][j]=='O')
            dfs(n-1,j,n,m,mat,vis);
            
        }
        
        for(int i=0;i<n;i++)
        {
            // This is for first row
            if(!vis[i][0] && mat[i][0]=='O')
            dfs(i,0,n,m,mat,vis);
            
             // This is for last row
            if(!vis[i][m-1] && mat[i][m-1]=='O')
            dfs(i,m-1,n,m,mat,vis);
            
        }
        
        
        // This is for checking whether any 'O' is left for marking as visited
        // if left then marked it as'X
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && mat[i][j]=='O')
                mat[i][j]='X';    
            }
        }
        

        
    }
};