#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static bool cmp(int a,int b){
        if(binarycount(a)!=binarycount(b)){
        return binarycount(a)<binarycount(b);}
        else{
            return a<b;
        }
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
        

    }
    static int binarycount(int num){
        int count=0;
        while(num){
            count+=num%2;
            num=num/2;
        }
        return count;
        
    }
};