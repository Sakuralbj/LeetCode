class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0){
            return 0;
        }
        int n=matrix[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        int maxlen=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='0'){
                    dp[i+1][j+1]=0;
                }else{
                    dp[i+1][j+1]=min(dp[i][j+1],min(dp[i+1][j],dp[i][j]))+1;
                    maxlen=max(maxlen,dp[i+1][j+1]);
                }
            }
        }
        return maxlen*maxlen;
    }
};