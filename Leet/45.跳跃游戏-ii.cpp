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
        
        int position=nums.size()-1;
        int step=0;         
        while (position!=0)
        {
            for (int i = 0; i < position; i++)
            {
                if(nums[i]>=position-i){
                    position=i;
                    step++;
                    break;
                }
            }
            
        }
        return step;
        
       

        


        
        
    }
};
// @lc code=end

