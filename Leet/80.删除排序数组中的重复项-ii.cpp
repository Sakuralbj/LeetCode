/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        if(nums.size()<=2){
            return nums.size();
        }
        int count=1;
        for ( i = 1; i < nums.size(); i++)
        {
           if(nums[i]==nums[i-1]){
               count++;
           }else
           {
               count=1;
           }
           if (count<=2)
           {
               nums[j++]=nums[i];
           }
           
        }
        return j;
        
        

        }
        
        
        
    
};
// @lc code=end

