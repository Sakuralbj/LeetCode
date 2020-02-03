/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int l=0,r=n-1;
        int x=1;
        while (l<r)
        {
            for (int i = l; i <=r; i++)
            {
                ans[l][i]=x++;  
                cout<<ans[l][i];
            }
            for (int i =l+1; i <=r; i++)
            {
                ans[i][r]=x++;
            }
            for (int i =r-1; i >=l; i--)
            {
                ans[r][i]=x++;
            }
            for (int i =r-1; i >l; i--)
            {
                ans[i][l]=x++;
            }
             l++;
             r--;
        }
       
        if (l==r)
        {
            ans[l][r]=x++;
            return ans;
        }
        return ans;
        
        
    }
        
        



        
    
};
// @lc code=end

