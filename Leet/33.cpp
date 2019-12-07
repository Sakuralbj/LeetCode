//
// Created by 马建波 on 2019-12-03.
//
#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while (l<=r){
            int mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }

        if(nums[mid]<nums[l]){

            if(target<=nums[r]&&target>nums[mid]){
                l=mid+1;
            } else{
                r=mid-1;
            }

        } else if(nums[mid]>nums[r]) {//拐点在右边
            if (target >=nums[l] && target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

            cout<<l;

        }
        return -1;




    }
};
int main(){
    Solution s1;
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    cout<<s1.search(nums,0);

    
}