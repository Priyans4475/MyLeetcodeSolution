class Solution {
public:
//   int noOfzero(vector<vector<int>>& board,int row,int col){
//       int rowd[]={-1,0,1,1,1,0,-1,-1};
//       int cold[]={1,1,1,0,-1,-1,-1,0};
//       int cnt=0;
//       for(int i=0;i<8;i++)
//       {
//           int newr=row+rowd[i]; 
//           int newc=col+cold[i];
//         if(board[newr][newc]==0)
//         cnt++;
//       }

//       return cnt;
//   }

  int noOfone(vector<vector<int>>& board,int row,int col){
     int rowd[]={-1,0,1,1,1,0,-1,-1};
      int cold[]={1,1,1,0,-1,-1,-1,0};
      int cnt=0;
      int n=board.size();
      int m=board[0].size();
      
      for(int i=0;i<8;i++)
      {
          int newr=row+rowd[i]; 
          int newc=col+cold[i];
          if(newr>=0 && newr<n && newc>=0 && newc<m)
        {if(board[newr][newc]==1)
        cnt++;}
      }

      return cnt;
  }
   int solve(vector<vector<int>>& board,int i,int j)
   {
       if(board[i][j]==0)
       {
           if(noOfone(board,i,j)==3)
        {   cout<<noOfone(board,1,0);
             return 1;}
        //    else
        //    return 0;
       }
       else
       {
           if(noOfone(board,i,j)==3 ||noOfone(board,i,j)==2 )
           return 1;
           else if(noOfone(board,i,j)<2)
           return 0;
           else if(noOfone(board,i,j)>3)
           return 0;
       }
       return 0;


   }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>board1(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board1[i][j]=solve(board,i,j);
            }
        }

        board=board1;
    }
};