//
// Created by 马建波 on 2019-11-08.
//
#include "string"
class Solution {
public:
    string intToRoman(int num) {
        string s1("");
        if (num >= 1000) {
            int temp = num / 1000;
            while (temp > 0) {
                string s="M";
                s1.append(s);
                temp--;
            }
            s1 = s1.append(intToRoman(num % 1000));

        }
        if (num >= 100&&num <= 999)
        {

            int temp = num / 100;
            if (temp == 9) {
                s1 = s1.append("CM");
            } else if (temp < 9&&temp >= 5)
            {

                s1 = s1.append("D");
                temp = temp - 5;
                while (temp > 0) {
                    string s("C");
                    s1 = s1.append(s);
                    temp--;
                }
            }else if (temp == 4) {
                s1 = s1.append("CD");

            } else {
                while (temp > 0) {
                    string s("C");
                    s1 = s1.append(s);
                    temp--;
                }
            }
            s1 = s1.append(intToRoman(num % 100));

        }
        if (num < 100&&num >= 10)
        {

            int temp = num / 10;
            if (temp == 9) {
                s1 = s1.append("XC");
            } else if (temp < 9&&temp >= 5)
            {

                s1 = s1.append("L");
                temp = temp - 5;
                while (temp > 0) {
                    string s("X");
                    s1 = s1.append(s);
                    temp--;
                }
            }else if (temp == 4) {
                s1 = s1.append("XL");

            } else {
                while (temp > 0) {
                    string s("X");
                    s1 = s1.append(s);
                    temp--;
                }
            }
            s1 = s1.append(intToRoman(num % 10));

        }
        if (num < 10&&num >= 0)
        {

            int temp = num;
            if (temp == 9) {
                s1 = s1.append("IX");
            } else if (temp < 9&&temp >= 5)
            {

                s1 = s1.append("V");
                temp = temp - 5;
                while (temp > 0) {
                    string s("I");
                    s1 = s1.append(s);
                    temp--;
                }
            }else if (temp == 4) {
                s1 = s1.append("IV");

            } else {
                while (temp > 0) {
                    string s("I");
                    s1 = s1.append(s);
                    temp--;
                }
            }
        }
        return s1;
    }







};