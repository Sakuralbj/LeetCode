/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0||height.size()==1){
            return 0;
        }
        int right=height.size()-1;
        int left=0;
        int leftmax=height[left];
        int rightmax=height[right];
        int ans=0;
        while (left<right)
        {
            if (leftmax<rightmax)
            {
                ans+=leftmax-height[left];
                left++;
                leftmax=max(leftmax,height[left]);
            }else
            {
                ans+=rightmax-height[right];
                right--;
                rightmax=max(rightmax,height[right]);
            }
            
            
            
        }
        return ans;
        


        
    }
};
// @lc code=end

