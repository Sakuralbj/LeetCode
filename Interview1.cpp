// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：何海涛
//==================================================================

// 面试题3（二）：不修改数组找出重复的数字
// 题目：在一个长度为n+1的数组里的所有数字都在1到n的范围内，所以数组中至
// 少有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改输入的
// 数组。例如，如果输入长度为8的数组{2, 3, 5, 4, 3, 2, 6, 7}，那么对应的
// 输出是重复的数字2或者3。
#include<iostream>
using namespace std;
int getCount(const int* numbers,int start,int end,int length){
    int count=0;
    for (int i = 0; i < length; i++)
    {
        if ((numbers[i]>=start)&&(numbers[i]<=end))
            count++;
        
        
    }
    return count;

    
}
int getDuplication(const int* numbers, int length){
    int start=1,end=length-1;
    if (numbers==nullptr||length<=0)
    {
        return -1;
    }
    while (start<=end)
    {
        int middle=(end-start)/2+start;
        int count=getCount(numbers,start,middle,length);
        if (end==start)
        {
            if (count>1)
            {
                return start;
            }
            else
            {
                break;
            }
            
            
        }
        
        if (count>middle-start+1)
        {
        
            end=middle;
        }
        else
        {
            start=middle+1;
        }
        
        
    }
    return -1;
    
    

    
}