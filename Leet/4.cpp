#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    double KortedArrays(vector<int>& nums1, vector<int>& nums2,int k) {
        int m=nums1.size(),n=nums2.size();
        int l=max(0,k-n),r=min(m,k);
        while (l<r)
        { int mid=l+(r-l)/2;
          if(nums1[mid]<nums2[k-mid-1]){
              l=mid+1;
          }else
          {
              r=mid;
          }
          
            
        }
        if(l==0){
            return double(nums2[k-l-1]);
        }else if(l==k)
        {
            return double(nums1[k-1]);
        }else
        {
            return double(max(nums1[l-1],nums2[k-l-1]));
        }
        
        
        
        
        
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size()+nums2.size();
        if(x%2==0){
            return (KortedArrays(nums1,nums2,x/2)+KortedArrays(nums1,nums2,x/2+1))/2;
        }else
        {
            return KortedArrays(nums1,nums2,x/2+1);
        }
        

        
    }
};
