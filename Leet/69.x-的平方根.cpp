/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        x-long(x);
        long left=1,right=x/2;
        while (left<=right)
        {
            long mid=(right-left)/2+left;
            if(mid*mid<=x&&(mid+1)*(mid+1)>x){
                return mid;
            }
            if(mid*mid<x){
                left=mid+1;
            }else
            {
                right=mid-1;
            }
            
        }
        return x;
        
        
    }
};
// @lc code=end

