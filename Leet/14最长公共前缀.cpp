class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        if(len==0){
            return "";
        }
        string prefix=strs[0];
        for(int i=1;i<len;i++){
            int tmplen=0;
            for(int j=0;j<prefix.size();j++){
                if(prefix[j]==strs[i][j]){
                    tmplen=j+1;
                }else{
                    break;
                }
            }
            if(tmplen==0){
                return "";
            }
            prefix=prefix.substr(0,tmplen);
        }
        return prefix;
        
    }
};