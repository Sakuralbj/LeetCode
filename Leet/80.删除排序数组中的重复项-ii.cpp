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

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        if(nums.size()<2){
            return nums.size();
        }
        int len=nums.size();
        int left=1;
        for(int i=2;i<len;i++){
            if(nums[i]==nums[left-1]){
                continue;
            }
            nums[++left]=nums[i];
        }

        return left+1;
        
    }
};