/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int dp[len]={0};
        vector<int> tmp;
        subhelp(nums,0,tmp);
        return ans;


        
    }
    void subhelp(vector<int>& nums,int start,vector<int>tmp){
        ans.push_back(tmp);
        for (int i = start; i < nums.size(); i++)
        {   if(i!=start&&nums[i]==nums[i-1]){
            continue;}
            tmp.push_back(nums[i]);
            subhelp(nums,i+1,tmp);
            tmp.pop_back();
        }
        
    }
};
// @lc code=end

