class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return 0;
        }
        int left=0,right=nums.size()-1;
        int l=-1,r=-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid;   
            }
        }
        if(nums[left]!=target){
            return 0;
        }
        l=left;
        left=0,right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left+1)/2;
            if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid;   
            }
        }
        r=left;
    
        return r-l+1;
    

    }
};