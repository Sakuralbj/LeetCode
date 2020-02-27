class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        vector<char>st;
        int maxsize=0;
        while(right<s.size()){
            if(find(st.begin(),st.end(),s[right])==st.end()){
                maxsize=max(maxsize,right-left+1);
                st.push_back(s[right]);
                right++;
            }else{
                while(s[left]!=s[right]){
                    left++;
                    st.erase(st.begin());
                }
                st.erase(st.begin());
                left++;
            }
        }
        return  maxsize;

    }
};