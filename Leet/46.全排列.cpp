/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        int len=nums.size();
        
        int judge[100]={0};
        vector<int>tmp;
        permutehelp(nums,tmp,judge,len);
                
        return result;
    }
    void permutehelp(vector<int> nums,vector<int> tmp,int judge[],int len){
        if(tmp.size()==len){
            result.push_back(tmp);
            return;

        }
        for (int i = 0; i < nums.size(); i++)
        {  
            if(judge[i]==0){
                tmp.push_back(nums[i]); 
                judge[i]=1;
                permutehelp(nums,tmp,judge,len);
                judge[i]=0;
                tmp.pop_back();

            }
            
        }
        
    }





        
    
};
// @lc code=end

