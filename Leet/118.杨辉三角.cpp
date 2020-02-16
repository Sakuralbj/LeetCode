/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        if(numRows==0){
            return ans;
        }
        ans.push_back(vector<int>(1,1));
        for (int i = 2; i <= numRows; i++)
        {
            vector<int>tmp(i);
            tmp[0]=1;
            tmp[i-1]=1;
            for (int j = 1; j <i-1 ; j++)
            {
                tmp[j]=ans[i-2][j-1]+ans[i-2][j];
            }
            ans.push_back(tmp);
            cout<<i<<endl;
        }
        return ans;
        
        

        
    }
};
// @lc code=end

