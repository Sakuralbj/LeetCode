/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

        vector<vector<long>>dp(m,vector<long>(n,1));
        dp[0][0]=(obstacleGrid[0][0]==0)?1:0;
        
        for (int i = 1; i < m; i++)
        {
            dp[i][0]=(obstacleGrid[i][0]==1)?0:dp[i-1][0];
        }
         for (int i = 1; i < n; i++)
        {
            dp[0][i]=(obstacleGrid[0][i]==1)?0:dp[0][i-1];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j]=(obstacleGrid[i][j]==1)?0:(dp[i-1][j]+dp[i][j-1]);
            }

            
        }
        return dp[m-1][n-1];
        
        
        

        
    }
};
// @lc code=end

