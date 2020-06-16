class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        int k=1;
        
        vector<int>output(len,1);
        for(int i=1;i<nums.size();i++){
            
            output[i]=nums[i-1]*k;
            k=output[i];
        }
        k=1;
        for(int i=nums.size()-2;i>=0;i--){
            k=nums[i+1]*k;
            output[i]=output[i]*k;
        }
        return output;

        

    }
};