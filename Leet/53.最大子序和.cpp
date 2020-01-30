/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
       
        int ans=nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i]=(nums[i-1]>0)?nums[i-1]+nums[i]:nums[i];
            if(nums[i]>ans){
                ans=nums[i];
            }
        }
        return ans;
    }
        
        

        
    
};
// @lc code=end

