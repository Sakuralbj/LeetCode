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
        int times=0;
        int len=matrix.size();
        int x=len-1;
        while (times<len/2)
        {   
            int bound=x;
            for (int i = 0; i <bound ; i++)
            {   
                tmp=matrix[times][times+i];
                matrix[times][times+i]=matrix[len-1-times-i][times];
                matrix[len-1-times-i][times]=matrix[len-1-times][len-1-times-i];
                matrix[len-1-times][len-1-times-i]=matrix[times+i][len-1-times];
                
                matrix[times+i][len-1-times]=tmp;
                
            }
            times=times+1;
            x=x-2;
        }
        
    }
};
// @lc code=end

