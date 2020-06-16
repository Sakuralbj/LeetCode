class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        int i=0;
        for(auto it:nums){
            if(it!=val){
                nums[i++]=it;
            }
        }
        return i;

    }
};