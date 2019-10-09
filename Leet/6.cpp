//
// Created by 马建波 on 2019-10-08.
//
#include <string>
#include "string.h"
#include "vector"
#include "math.h"
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int totalrow = min(int(s.size()),numRows);
        //一定要初始化vector大小，否则循环中给未添加任何元素的vector直接在string上添加char时会报错。
        vector<string> res(totalrow);
        if (numRows == 1) {
            return s;
        }
        int currow = 0;

        bool go;
        go = false;
        for (char c:s) {

            res[currow] += c;
            if (!go) {
                currow++;
            } else {
                currow--;
            }
            if( (currow == totalrow-1)||(currow == 0))
            {
                go = !go;
            }
        }
        string result;
        for (int i = 0; i < totalrow; ++i) {
            result += res[i];

        }
        return result;
    }

};



