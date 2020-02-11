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
            if(nums[mid]<nums[left]){
                if(target>nums[mid]&&target<=nums[right]){
                    left=mid+1;
                 }else
                 {
                     right=mid-1;
                 }
                 
            }else if(nums[mid]>nums[left])
            {
                if(target<nums[mid]&&target>=nums[left]){
                    right=mid-1;
                }else
                {
                    left=mid+1;
                }
                
            }else
            {
                left++;
            }
        }
        return false;
        
        
    }
};
// @lc code=end

