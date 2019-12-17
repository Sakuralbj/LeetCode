#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x=nums.size();
        int result[x+2];
        for (int i = 1; i <=x+1; i++)
        {
            result[i]=-1;
            }        
        
        for(int i=0;i<x;i++){
            if(nums[i]<=x&&nums[i]>=1){
                result[nums[i]]=1;
            }

        }
        for(int i=1;i<=x;i++){
            if(result[i]==-1){
                return i;
            }
        }
        return x+1;

        
    }
};