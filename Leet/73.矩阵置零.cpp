/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int r[m]={0};
        int c[n]={0};
        for (int i = 0; i < m; i++)
        {   
            for (int j = 0; j < n; j++)
            {
                if(matrix[i][j]==0){
                    cout<<i<<endl;
                    cout<<j<<endl;
                    r[i]=1;
                    c[j]=1;
                }
            }
            
        }
        
        for (int i = 0; i < m; i++)
        {
                if(r[i]==1){
                    for (int j = 0; j < n; j++)
            
                matrix[i][j]=0;
                }
            }
        for (int i = 0; i < n; i++)
        {
                if(c[i]==1){
                    for (int j = 0; j < m; j++)
            
                matrix[j][i]=0;
                }
            }
        

        
    }
};
// @lc code=end

