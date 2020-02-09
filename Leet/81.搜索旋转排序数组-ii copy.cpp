/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while (left<=right)
        {
            int mid=(right-left)/2+left;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]<=nums[right]){
                if(target>=nums[mid]&&target)
            }else
            {
                if(target<=nums[mid]&&target>=nums[left]){
                    mid=right-1;
                }else
                {
                    /* code */
                }
                
            }
            



        }
        
        
    }
};
// @lc code=end

