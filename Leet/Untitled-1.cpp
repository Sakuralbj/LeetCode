#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string sortString(string s) {
        string ans;
        sort(s.begin(),s.end());
        
        int count=0;
        while(count<s.size()){
            int i=0;
            if(s.size()==0){
                break;
            }
            char pre=s[0];
            ans.push(s[i]);
            count++;
            s.erase(s.begin()+i);
            while(i<s.size()){
                if(s[i]>pre){
                    pre=s[i];
                    ans.push(s[i]);
                    count++;
                    s.erase(s.begin()+i);
                    continue;
                }
                i++;
            }
            if(s.size()==0){
                break;
            }
            int j=s.size()-1;
            char pre=s[j];
            ans.push(s[j]);
            s.erase(s.begin()+j);
            count++;
            j--;
            
            
            while(j>=0){
                if(s[j]<pre){
                    pre=s[j];
                    ans.push(s[j]);
                    count++;
                    s.erase(s.begin()+j);
                    j--;
                    continue;
                }
                j--;
            }
        }
        return ans;
        

    }
};