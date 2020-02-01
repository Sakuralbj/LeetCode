/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) { 
        if(divisor==-1&&dividend==INT32_MIN){
            return INT32_MAX;
        }
        if(divisor==-1){
            return -dividend;
        }
        if(divisor==1){
            return dividend;
        }
        int sign=1;
        if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)){
            sign=-1;
        }
        long tmp=dividend;
        long tmp1=divisor;
        tmp=(tmp<0)?-tmp:tmp;

        tmp1=(tmp1<0)?-tmp1:tmp1;
        return sign*dividehelp(tmp,tmp1);

        
    }
    long dividehelp(long dividend,long divisor){
        long x=divisor;
        if(dividend<divisor){
            return 0;
        }else if(dividend>=divisor&&dividend<divisor+divisor)
        {
            return 1;
        }else
        {
       
        
        
        long tmp=1;
        while (dividend>=divisor+divisor)
        {   
            divisor+=divisor;
            tmp+=tmp;
        }
    
        return tmp+dividehelp(dividend-divisor,x);
        }


    }
};
// @lc code=end

