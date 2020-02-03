/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tmp=0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i+1; j<matrix.size(); j++)
            {
                int tmp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=tmp;
            }
        }
            for (int i = 0; i < matrix.size()/2; i++)
            {
                for (int j = 0; j < matrix.size(); j++)
                {
                    swap(matrix[j][i],matrix[j][matrix.size()-i-1]);
                }
                
            }
            return ;
            
            
        
        
    }
};
// @lc code=end

