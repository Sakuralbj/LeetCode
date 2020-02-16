/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        

        for(int i = 0; i <= rowIndex; i++)
        {
           ans.push_back(1);
           for (int j = i-1; j >0; j--)
           {
               ans[j]=ans[j]+ans[j-1];
           }
           
        }
        return ans;
        
        
        

        
    }
    
};
// @lc code=end

