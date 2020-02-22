/*
 * @lc app=leetcode.cn id=127 lang=cpp
 *
 * [127] 单词接龙
 */

// @lc code=start
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(wordList.size()==0){
            return 0;
        }
        auto it=find(wordList.begin(),wordList.end(),endWord);
        if(it==wordList.end()){
            return 0;
        }
        wordList.erase(it);
        it=find(wordList.begin(),wordList.end(),beginWord);
        if(it!=wordList.end()){
            wordList.erase(it);
        }
        queue<string>qtstart;;
        queue<string>qtend;
        wordList.push_back(endWord);
        int len=wordList.size();
        
        bool visitedstart[len];
        bool visitedend[len];
        
        fill(visitedstart,visitedstart+len,false);
        fill(visitedend,visitedend+len,false);
        qtstart.push(beginWord);
        qtend.push(endWord);
        visitedend[len-1]=true;
        int count=0;
        while (!qtstart.empty()&&!qtend.empty())
        {   count++;
            if(qtstart.size()<=qtend.size()){
                
                int startlen=qtstart.size();
               for (int i = 0; i < startlen; i++)
               {
                    string top=qtstart.front();
                    qtstart.pop();
                    for (int j = 0; j < len; j++)
                    {
                        if(visitedstart[j]){
                            continue;
                        }
                        if(!onediff(wordList[j],top)){
                            continue;
                        }  
                    
                    if(visitedend[j]){
                        return count+1;
                    }
                    qtstart.push(wordList[j]);
                    visitedstart[j]=true;
                    }
               }
             }else
             {     int startlen=qtend.size();
                 for (int i = 0; i < startlen; i++)
               {
                    string top=qtend.front();
                    qtend.pop();
                    for (int j = 0; j < len; j++)
                    {
                        if(visitedend[j]){
                            continue;
                        }
                        if(!onediff(wordList[j],top)){
                            continue;
                        }  
                    
                    if(visitedstart[j]){
                        return count+1;
                    }
                    qtend.push(wordList[j]);
                    visitedend[j]=true;
                    }
               }
             }
        }
        return 0;
     }
        
    bool onediff(string beginword,string tmpword){
        int diff=0;
        for (int i = 0; i < beginword.size(); i++)
        {
            if(beginword[i]!=tmpword[i]){
                diff++;
            }
            if(diff>1){
                return false;
            }

        }
        return diff==1;
        
    }
};
// @lc code=end

