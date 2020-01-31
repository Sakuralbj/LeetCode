/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len=nums.size();
        bool d[len]={false};
        d[0]=true;
        for (int i = 0; i < len-1; i++)
        {   if(d[i]==false){
            continue;
        }
            int maxnext=min(len-1,i+nums[i]);
            
            for (int j = i+1; j <=maxnext; j++)
            {
                d[j]=true;
            }
            
        }
        return d[len-1];
        
        
    }
};
// @lc code=end

