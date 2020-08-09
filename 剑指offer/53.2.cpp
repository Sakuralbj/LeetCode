class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,j=nums.size();
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]==mid){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return i;

    }
};