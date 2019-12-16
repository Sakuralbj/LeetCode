#include<iostream>
#include<vector>
using namespace std;
//时间复杂度o(n),最长字串一定是0-n-1某个下表结尾。
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int x[n];
        x[0]=nums[0];
        int maxsize=nums[0];
        for (int i = 1; i < n; i++)
        {
            if(x[i-1]>0){
                x[i]=x[i-1]+nums[i];
            }else
            {
                x[i]=nums[i];
            }
            if(x[i]>maxsize){
                maxsize=x[i];
            }
            
        }
        return maxsize;
        


       
        
        

    }
};