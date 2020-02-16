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
        for(int i=0;i<len;i++){
            dp.push_back(triangle[len-1][i]);
        }
        for (int i = len-2; i >= 0; i--)
        {
           for (int j = 0; j <=i; j++)
           {
               dp[j]=min(dp[j],dp[j+1])+triangle[i][j];
           }
           
        }
        return dp[0];
        
       
        
        
        
    }
};
// @lc code=end

