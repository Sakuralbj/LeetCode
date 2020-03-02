class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int index=partition(nums,0,nums.size()-1);
        while(true){
            
            if(index==nums.size()-k){
                return nums[index];
            }else if(index<nums.size()-k){
                index=partition(nums,index+1,nums.size()-1);
            }else{
                index=partition(nums, 0,  index-1);
            }
        }
        return -1;

    }
    int partition(vector<int>& nums,int left,int right){
        swap(nums[left], nums[rand() % (right - left + 1) + left]);
        int pivot=nums[left];
        while(left<right){
            while(left<right&&nums[right]>=pivot){
                right--;
            }
            nums[left]=nums[right];
            while(left<right&&nums[left]<=pivot){
                left++;
            }
            nums[right]=nums[left];

        }
        nums[left]=pivot;
        return left;
    }
};