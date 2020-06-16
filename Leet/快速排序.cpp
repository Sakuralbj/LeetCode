#include<iostream>
#include<vector>
using namespace std;
class Solutin{
    public:
        int partition(int m[],int low,int right){
            int pivot=m[low];
            while(low<right){
                while(low<right&&m[right]>=pivot){
                    right--;
                }
                m[low]=m[right];
                while(low<right&&m[low]<=pivot){
                    low++;
                }
                m[right]=m[low];

            }
            m[low]=pivot;
            return low;
        }

        void qsort(int m[],int low,int high){
            if(low<high){
               int index= partition(m,low,high);
               partition(m,low,index-1);
               partition(m,index+1,high);
            }
        }
};

int main(){
     int m[9]={3,2,1,4,5,6,8,7,1};
    Solutin s1;
    s1.qsort(m,0,8);
    for(int i=0;i<=9;i++){
        cout<<m[i]<<" ";
    }
    return 0;
}