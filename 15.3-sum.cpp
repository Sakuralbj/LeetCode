/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int> > result;
    if (nums.size()<3||nums.front()>0||nums.back()<0)
    {
        return result;
    }
    
    for (int i = 0; i <nums.size()-2; i++){
        if (nums[i]>0)
        {
            break;
        }
        
        if (i>0&&nums[i]==nums[i-1])
        {
            continue;
        }
        
          
        
        int j=i+1,k=nums.size()-1;
        while (j<k)
        {
            if (nums[i]+nums[j]+nums[k]<0)
            {
                j++;
                
            }
            else if (nums[i]+nums[j]+nums[k]>0)
            {
                k--;
                
            }
           
           else if (nums[i]+nums[j]+nums[k]==0)
            {        
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);
                while (j<k&&nums[j]==nums[j+1])
                {
                    j++;
                }
                while (k>j&&nums[k]==nums[k-1])
                {
                    k--;
                }
                j++;
                k--;
                
                
                result.push_back(temp);
                
            }
            
    }
    }
    return result;
    }
};
