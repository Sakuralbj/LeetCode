/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        if(m==0){
            return 0;
        }
        int n=grid[0].size();
        int d[m][n];
        for (int i = 0; i < n; i++)
        {
           d[0][i]=(i>0?d[0][i-1]:0)+grid[0][i];
        }
        
        for (int i = 1; i < m; i++)
        {    
            for (int j = 0; j < n; j++)
            {   if (j==0)
            {
                d[i][j]=d[i-1][j]+grid[i][j];
            }else
            {
                //d[i][j]=((d[i-1][j]<d[i][j-1])?d[i-1][j]:d[i][j-1])+grid[i][j];
                d[i][j]=min(d[i-1][j],d[i][j-1])+grid[i][j];
            }

            
                
            }
            
        }
        return d[m-1][n-1];
        

        
    }
};
// @lc code=end

