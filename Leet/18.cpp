//
// Created by 马建波 on 2019-11-14.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> result;
        sort(nums.begin(), nums.end());
        if (nums.size() < 4) {
            return result;
        }
        for (int i = 0; i < nums.size() - 3; ++i) {
            if (i >= 1 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int k = j + 1, l = nums.size() - 1;
                while (k < l) {
                    if(k>j+1&&nums[k]==nums[k-1]){
                        k++;
                        continue;
                    }
                    if(l<nums.size()-1&&nums[l]==nums[l+1]){
                        l--;
                        continue;
                    }
                    if (nums[i] + nums[j] + nums[l] + nums[k] < target) {
                        k++;
                    } else if (nums[i] + nums[j] + nums[l] + nums[k] > target) {
                        l--;
                    } else {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);
                        result.push_back(temp);
                        k++;
                        l--;
                    }
                }

            }

        }
        return result;
    }


    };

