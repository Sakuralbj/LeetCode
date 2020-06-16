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
        int lastposition=len-1;
        for (int i = len-1; i >=0; i--)
        {   if(i+nums[i]>=lastposition){
            lastposition=i;}
            
        }
           
        
        return (lastposition==0);
        
        
        }
};
// @lc code=end
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len=nums.size();
        int end=min(nums[0],len-1);
        int i=0;
        int nextstep=0;
        while(true){
            while(i<=end){
            nextstep=max(nextstep,i+nums[i]);
            i++;
            }
            if(nextstep>=nums.size()-1){
                return true;
            }
            i=end+1;
            end=nextstep;
            if(i>end){
                break;
            }
            
            

        }
        return false;


    }
};