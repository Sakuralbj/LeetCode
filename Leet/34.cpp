//
// Created by 马建波 on 2019-12-05.
//
#include "vector"
#include  "iostream"
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result={-1,-1};
        if(nums.size()==0){
            return result;
        }
        int left=0,right=nums.size()-1;
        int l,r,mid;

        while (left<=right){
             mid=(left+right)/2;//mid=left+(right-left)/2
            if(nums[mid]==target){
                l=mid;
                r=mid;
                break;
            } else if(nums[mid]>target){
                right=mid-1;
            } else{
                left=mid+1;
            }
        }
        if(nums[mid]!=target){
            return result;

        }
        while(l>=left){
            mid=(left+l)/2;

            if(nums[mid]==target){
                if(mid==left||nums[mid-1]!=target){
                    result[0]=mid;
                    break;
                } else{
                    l=mid-1;
                }


            } else{
                left=mid+1;
            }
        }
        while (r<=right){
            mid=(right+r)/2;
            if(nums[mid]==target){
                if(mid==right||nums[mid+1]!=target){
                    result[1]=mid;
                    break;
                    } else{
                    r=mid+1;
                    }

            } else{
                right=mid-1;
            }
        }

        return result;
    }
    };
