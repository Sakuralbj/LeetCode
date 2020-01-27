#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> m1;
            vector<int>r;
            for (int i = 0; i <nums.size(); i++)
            {
                m1[nums[i]]=i;

            }
            for ( int i = 0; i < nums.size(); i++)
            {    r.push_back(i);
                if(m1.count(target-nums[i])==1&&m1[target-nums[i]]!=i){
                    r.push_back(m1[target-nums[i]]);
                    return r;
                } 
                r.pop_back();
                
            }
            return r;
            
            

            
        }
        
    };
    int main(){
        cout<<"hello world 123456";
        return 0;
    }