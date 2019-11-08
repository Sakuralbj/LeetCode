//
// Created by 马建波 on 2019-10-22.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        int flag = -1;
        int i = 0;
        int ans=0;
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] == '-') {
            flag = 1;
        }
        if (str[i] == '+'||str[i] == '-')
        {
            i++;
        }

        while (i < str.size() && isdigit(str[i])) {
            int temp = str[i] - '0';
            if (flag == 1) {
                temp = -temp;
                if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && temp < INT_MIN - 10 * ans)) {

                    ans = INT_MIN;
                    break;
                }
                ans = 10 * ans + temp;

                i++;
            } else {
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && temp > INT_MAX - 10 * ans)) {

                    ans = INT_MAX;
                    break;
                }
                ans = 10 * ans + temp;

                i++;
            }
        }

        return ans;

    }

    int isdigit(char c) {
        int x=0;
        if (c  <= '9'&&c  >= '0')
        {  x=1;

        }
        return x;
    }

};
int main(){
    Solution s1;
    cout<<s1.myAtoi("-91283472332");
}