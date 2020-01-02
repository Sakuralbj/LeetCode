#include<iostream>
#include<vector>
using namespace std;
//考虑减少空间复杂度
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int x=nums.size();
        while (i<x)
        {
            if(nums[i]<=x&&nums[i]>=1&&nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);

            }else
            {
                i++;
            }
            
        }
        for (int i = 0; i < x; i++)
        {   
           if(nums[i]!=i+1){
               return i+1;
           }
        }
        return x+1;

        
        

        
        




    }
};
int main(){
    Solution s1;
    vector<int>s;
    s.push_back(3);
    s.push_back(4);
    s.push_back(-1);
    s.pushback(1);
    cout<<s1.firstMissingPositive(s);

}