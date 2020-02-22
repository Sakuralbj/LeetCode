class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        if(m==0){
            return;
        }
        bool isedge=false;
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0||j==0||i==m-1||j==n-1)&&(board[i][j]=='O')){
                    
                    dfs(i,j,board);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
        return;

    }
    void dfs(int i,int j,vector<vector<char>>& board){
        int m=board.size();
        int n=board[0].size();
        if(i<0||i>=m||j<0||j>=n||board[i][j]=='#'||board[i][j]=='X'){
            return;
        }
        
        board[i][j]='#';
        dfs(i+1,j,board);
        dfs(i-1,j,board);
        dfs(i,j+1,board);
        dfs(i,j-1,board);
        return;
    }
};