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
    if (nums.size()<3)
    {
        return result;
    }
    
    for (int i = 0; i <nums.size()-2; i++){
        if (i>=1) {
        if (nums[i]==nums[i-1])
     {
         continue;
     }
        }
          
        
        int j=i+1,k=nums.size()-1;
        while (j<k)
        {
            if ((j>i+1)&&(j<nums.size()-1)&&(nums[j]==nums[j-1]))
            {
                j++;
                continue;
            }
            if ((k>1)&&(k<nums.size()-1))
            {
                if (nums[k]==nums[k+1])
                {
                     k--;
                continue;
                }
                
               
            }
            
            if (nums[j]+nums[k]>-nums[i])
            {
                k--;
                
                
                
            }
            else if  (nums[j]+nums[k]==-nums[i]){
                
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);
                j++;
                k--;
                result.push_back(temp);
                
            }
            else if (nums[j]+nums[k]<-nums[i])
            {
                j++;
                
            }
    }
    }
    return result;
    }
};
