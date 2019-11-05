//
// Created by 马建波 on 2019-10-08.
//
#include "vector"
#include "iostream"
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else if(x==0){
            return true;
        } else{
            bool result= true;
            vector<int>s1;

            while (x!=0){

                int temp=x%10;

                s1.push_back(temp);
                x=x/10;


            }
            int i=0;
            int j=s1.size()-1;

            while (i<=j){
                if(s1[i]!=s1[j]){

                    result= false;
                }
                i++;
                j--;


            }
            return result;


        }

    }
};
int main(){
    Solution s1;
    if(s1.isPalindrome(121)){
        cout<<123;
    }
    return 0;

}