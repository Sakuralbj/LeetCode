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
        int i=0,j=0;
        if(nums.size()==0){
            return 0;
            
        }
        while (j<=nums.size()-1)
        {
            if(nums[i]==nums[j]){
                j++;
            }else
            {
                if(j-i>2){
                    nums.erase(nums.begin()+i+2,nums.begin()+j);
                    j=i+2;
                    i=j;
                }else
                {   i=j;
                    j++;

                }
                
            }
        }
        if(j-i>2){
            nums.erase(nums.begin()+i+2,nums.begin()+j);
        }
        return nums.size();
            

        }
        
        
        
    
};
// @lc code=end

