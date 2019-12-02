//
// Created by 马建波 on 2019-12-02.
//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1){
            return nums.size();
        }
        int now=0;
        for (int i = 1; i <nums.size() ; ++i) {
            if(nums[i]==nums[now]){

                continue;

            }
            nums[++now]=nums[i];



        }
        return now+1;

    }
};
