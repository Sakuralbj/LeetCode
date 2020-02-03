/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int>tmp;
    combinehelp(1,k,n,tmp,ans);
    return ans;
    
        
    }
    void combinehelp(int now,int k,int n,vector<int> tmp,vector<vector<int>>& ans){
        if(tmp.size()==k){
            ans.push_back(tmp);
            return;
        }
        for (int i = now; i <=n-k+tmp.size()+1 ; i++)
        {   tmp.push_back(i);
            combinehelp(i+1,k,n,tmp,ans);
            tmp.pop_back();
        }
        
    }
};
// @lc code=end

