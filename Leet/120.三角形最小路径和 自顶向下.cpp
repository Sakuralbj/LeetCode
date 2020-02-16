/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int len=triangle.size();
        if(len==0){
            return 0;
        }
        if(len==1){
            return triangle[0][0];
        }
        vector<int>dp;
        dp.push_back(triangle[0][0]);
        for (int i = 1; i < len; i++)
        {   dp.push_back(dp[i-1]+triangle[i][i]);
            for (int j = i-1; j>0; j--)
            {
               dp[j]=min(dp[j],dp[j-1])+triangle[i][j];
            }
            dp[0]=dp[0]+triangle[i][0];
            
        }
        int result=INT32_MAX;
        for (int i = 0; i < len; i++)
        {
            result=min(result,dp[i]);
        }
        return result;
        
        
        
    }
};
// @lc code=end

