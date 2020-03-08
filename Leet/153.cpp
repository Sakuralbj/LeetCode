class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums[0]<nums[r]){
            return nums[0];
        }
        if(r==0){
            return nums[0];
        }
        while(l<=r){
            int mid=(r-l)/2+l;
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];}
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid]>nums[l]){
                l=mid+1;
            }else{
                r=mid-1;
            }
                
            
        }
        return -1;

    }
};