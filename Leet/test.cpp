#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        int left[len],right[len];
        left[0]=1;
        right[len-1]=1;
        for(int i=1;i<len;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=len-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        vector<int>output(len,0);
        for(int i=0;i<nums.size();i++){
           
            output[i]=left[i]*right[i];
        }
        return output;

        

    }
};
int main(){
    int a;
    cin>>a;
    cout<<a;
}