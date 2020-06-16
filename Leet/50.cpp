#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long tmp=n;
        if(tmp<0){
            return 1/Powhelp(x,-tmp);
        }
        return Powhelp(x,tmp);

    }
    double Powhelp(double x,long n){
        if(n==0){
            return 1.0;
        }
        if(n==1){
            return x;
        }
        if(n%2==0){
            double tmp=Powhelp(x,  n/2);
            return tmp*tmp;
        }else{
            return x*Powhelp(x,  n-1);
        }
    }
};