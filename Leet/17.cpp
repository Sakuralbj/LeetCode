//
// Created by jianbo on 2019-09-30.
//
#include "vector"
#include "iostream"
#include "string.h"
using namespace std;
class Solution {
public:
    vector <string> letterCombinations(string digits) {
        int length = digits.size();
        vector <string> result;
        if (length == 0) {
            return result;
        }
        vector<string> resource = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

        int x = digits[0] - '0';
        string temp = resource[x];
        

        vector <string> temp1 = letterCombinations(digits.erase(0, 1));

        for (int j = 0; j < temp.size(); ++j) {
            string s ="";
            s=s+temp[j];
            for (int k = 0; k < temp1.size(); ++k) {
                 s = temp[j] + temp1[k];
                 result.push_back(s);
            }

            if(temp1.size()==0) {
                result.push_back(s);
            }
        }
        return result;


    }
};




