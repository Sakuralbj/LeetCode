#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(target>nums[n-1]){
            return n;
        }
        int l=0,r=n-1;
        while (l<r)
        {   
            int mid=l+(r-l)/2;
            if(nums[mid]<target){
                l=mid+1;
            }else
            {
                r=mid;
            }
            
        }
        return l;
        
        

        
    }
};