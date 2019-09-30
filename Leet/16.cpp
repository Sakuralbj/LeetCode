#include <iostream>
#include<vector>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {

    int len=nums.size();
    int ins=INT_MAX;
    int sum=0;
    int result=0;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < len; i++)
    {
        int j=i+1,k=len-1;
        sum=nums[i]+nums[j]+nums[k];
        while (j<k)
        {
            sum=nums[i]+nums[j]+nums[k];
            if (abs(sum-target)<ins)
            {
                ins=abs(sum-target);
                result=sum;
            }

            if(target>sum){
                j++;
            }
            else if(target<sum){
                k--;
            }
            else{
                return 0;
            }
        }

    }
    return result;
}
int main() {
    vector<int> test;
    test.push_back(0);
    test.push_back(2);
    test.push_back(1);
    test.push_back(-3);
    int x = threeSumClosest(test, 1);
    cout << x;
    return 1;
}