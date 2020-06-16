#include<iostream>
using namespace std;
const int N=100;
char * strlist[ N ] = {
"abc",
"123",
....
"def"
};
void find( char * strlist[], char ** strmin, char ** strmax ){
    
    for(int i=0;i<N;i++){
        bool flag=false;
        for(int j=0;j<N-i;j++){
            string str1=strlist[i];
            string str2=strlist[j];
            if(str1.compare(str2)>0){
                flag=true;
                swap(strlist[i],strlist[j]);

            }
        }
        if(flag==false){
            break;
        }
    }
    strmin=&strlist[0];
    strmax=&strlist[N-1];

}