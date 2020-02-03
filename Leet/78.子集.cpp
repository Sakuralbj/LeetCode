/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
#include<iostream>
#include<vector>
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>tmp;
    subsethelp(nums,tmp,0);
    return ans;

        
    }
    void subsethelp(vector<int>& nums,vector<int>tmp,int index){
        ans.push_back(tmp);
        
        for (int i = index; i < nums.size(); i++)
        {
            tmp.push_back(nums[i]);
            subsethelp(nums,tmp,i+1);
            tmp.pop_back();
        }
        return;
        
    }
};
// @lc code=end

