#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int temp;
        while (x != 0) {
            temp = x % 10;
            if (ans > INT_MAX / 10||(ans == INT_MAX / 10&& temp > INT_MAX - 10 * ans))
            {   ans=0;
                break;
            }
            if (ans < INT_MIN / 10||(ans == INT_MIN / 10 && temp < INT_MIN - 10 * ans))
            {   ans=0;
                break;
            }
            ans = 10 * ans + temp;
            x /= 10;


        }
        return ans;
    }
};
int main(){
    Solution s1;
    int x=s1.reverse(123);
    cout<<x;
}

