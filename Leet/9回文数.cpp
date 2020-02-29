class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        if(x<0||x%10==0){
            return false;
        }
        int reversenum=0;
        while(x>reversenum){
            int tmp=x%10;
            reversenum=10*reversenum+tmp;
            x=x/10;
        }
        return x==reversenum||x==reversenum/10;

    }
};