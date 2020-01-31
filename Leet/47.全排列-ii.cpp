/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int len=nums.size();
        
        bool judge[100]={0};
        vector<int>tmp;
        permutehelp(nums,tmp,judge,len);
                
        return result;
    }
    void permutehelp(vector<int> nums,vector<int> tmp,bool judge[],int len){
        
        if(tmp.size()==len){
            result.push_back(tmp);
            return;

        }
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {   
            
            
            if(judge[i]==0){
                if(s.count(nums[i])==0){
                
                s.insert(nums[i]);
            }else
            {
                continue;
            }
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

