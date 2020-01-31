/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int end=0;
        int step=0; 
        int maxpositon=nums[0];  
        int i;  
        if(nums.size()==1){
            return 0;
        }
            for ( i = 0; i < nums.size()-1; i++)
            {   
                maxpositon=max(i+nums[i],maxpositon);
                if(i==end){
                    step++;
    
                    
                    end=maxpositon;
                    
                }
            }
           return step; 
        }
       
};
// @lc code=end

