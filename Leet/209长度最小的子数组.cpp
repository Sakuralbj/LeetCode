class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int left=0,right=0;
        if(nums.size()==0){
            return 0;
        }
        int minsize=INT_MAX;
        int sum=nums[0];
        
        while(right<nums.size()){
            if(sum>=s){
                minsize=min(minsize,right-left+1);
                sum=sum-nums[left++];
            }else{
                if(right==nums.size()-1){
                    break;
                }
                sum+=nums[++right];
            }
        }
        return (minsize==INT_MAX)?0:minsize;

    }
};