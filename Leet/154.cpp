class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        
        while(l<r){
            int mid=(r-l)/2+l;
            if(nums[mid]>nums[r]){
                l=mid+1;

            }else if(nums[mid]<nums[r]){
                r=mid;
            }else{
                r=r-1;//r=r-1保证了一定不会丢失最小值

            }
        }
        return nums[l];
    }
};