/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int index=binarysearch(nums,target);
        int len=nums.size()-1;
        vector<int>ans;
        int lresult=0,rresult=0;
        if(index==-1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int ll=0,lr=index,rl=index,rr=len;
        while (ll<=lr)
        {
            int mid=(lr-ll)/2+ll;
            if(nums[mid]==target){
                if(mid==0){
                    lresult=mid;
                    break;
                }else
                {
                    if (nums[mid-1]!=target)
                    {
                        lresult=mid;
                        break;
                    }
                    lr=mid-1;
                    continue;
                }  
            }
            if(nums[mid]<target){
                ll=mid+1;
            }else
            {
                lr=mid-1;
            }
        }
        cout<<index;
        while (rl<=rr)
        {
            int mid=(rr-rl)/2+rl;
            if(nums[mid]==target){
                if(mid==len){
                    rresult=mid;
                    break;
                }else
                {   
                    if (nums[mid+1]!=target)
                    {   
                        rresult=mid;
                        break;
                    }
                    rl=mid+1;
                    continue;
                }  
            }
            if(nums[mid]<target){
                rl=mid+1;
            }else
            {
                rr=mid-1;
            }
        }
        ans.push_back(lresult);
        ans.push_back(rresult);
        return ans;        
            
        
        
        

        
    }
    int binarysearch(vector<int> nums,int target){
        int l=0,r=nums.size()-1;
        while (l<=r)
        {
            int mid=(r-l)/2+l;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                r=mid-1;
            }else
            {
                l=mid+1;
            }
            
        }
        return -1;
        
    }
};
// @lc code=end

