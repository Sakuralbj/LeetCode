/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0){
            return 1;
        }
        int m=n;
        long tmp=n;
        tmp=(tmp>=0)?tmp:-tmp;
        if(m<0){
            return 1/myPowhelp(x,tmp);
        }
        
        return myPowhelp(x,tmp);

        
    }
double myPowhelp(double x,long n){
    if(n==1){
        return x;
    }
    if(n==2){
        return x*x;
    }
    long tmp=1;
    double count=x;
    while (2*tmp<n)
    {
        x=x*x;
        tmp=2*tmp;
    }
    return x*myPowhelp(count,n-tmp);
    

}
};
// @lc code=end

