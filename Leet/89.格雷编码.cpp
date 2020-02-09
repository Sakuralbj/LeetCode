/*
 * @lc app=leetcode.cn id=89 lang=cpp
 *
 * [89] 格雷编码
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int>ans;
    vector<int> grayCode(int n) {
        vector<int>tmp;
        grayCodehelp

        
    }
    void grayCodehelp(int n,int index,vector<int>tmp){
        if(n==index){
            int sum=0;
            int binary=1;
            for (int i = 0; i < tmp.size(); i++)
            {
                sum+=binary*tmp[i];
                binary*=2;
            }
            ans.push_back(sum);
            
        }
    }
};
// @lc code=end

