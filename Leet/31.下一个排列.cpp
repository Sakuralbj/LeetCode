/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for (int i = nums.size()-1; i >0; i--)
        { 
            if(nums[i-1]<nums[i]){
            index=i-1;
            break;
            }
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for (int i = nums.size()-1; i> index; i--)
        {
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        sort(nums.begin()+index+1,nums.end());
        
    }
    
};
// @lc code=end

