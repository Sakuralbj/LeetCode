/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        int dp[m+1][n+1];
        if(m==0&&n==0){
            return 0;
        }
        dp[0][0]=0;
        for (int i = 0; i <n; i++)
        {
            dp[0][i+1]=dp[0][i]+1;
        }
        for (int i = 0; i < m; i++)
        {
            dp[i+1][0]=dp[i][0]+1;
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(word1[i]==word2[j]){
                    dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j]+1,dp[i][j+1]+1));
                }else
                {
                    dp[i+1][j+1]=min(dp[i][j]+1,min(dp[i+1][j]+1,dp[i][j+1]+1));
                }
                
            }
            
        }
        return dp[m][n];
        
        
        
    }
};
// @lc code=end

