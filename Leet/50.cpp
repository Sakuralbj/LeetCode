#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        if (n<0)
        {   if(n==INT32_MIN){

            return 1/myPow(x,-(n+1))*x;
        }else
        {
            return 1/myPow(x,-n);
        }
        }
        
        
        if(n%2==0){
            double tmp=myPow(x,n/2);
            return tmp*tmp;
        }else
        {
            return x*myPow(x,n-1);
        }
        
       
        
        
    }
};
