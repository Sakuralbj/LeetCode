//
// Created by 马建波 on 2019-11-26.
//
#include "vector"
#include "iostream"
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j=-1;

        for (int i = nums.size()-1; i >0 ; --i) {
            if (nums[i - 1] < nums[i]) {
                j = i - 1;

                break;
            }
        }

         if(j==-1){
             sort(nums.begin(),nums.end());
             return;
         }

            for (int k = nums.size()-1; k>j ; --k) {
                if (nums[k] > nums[j]) {
                    cout << k;
                    int temp = nums[k];
                    nums[k] = nums[j];
                    nums[j] = temp;
                    break;
                }
            }
            sort(nums.begin()+j+1,nums.end());
                return;



            }







};
int main(){
    Solution s1;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);


    s1.nextPermutation(nums);


    for (int i = 0; i <nums.size() ; ++i) {
        cout<<nums[i];

    }
}