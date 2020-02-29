class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()>nums2.size()){
            vector<int>tmp=nums1;
            nums1=nums2;
            nums2=tmp;
        }
        int m=nums1.size(),n=nums2.size();
        int midsize=(m+n+1)/2;
        int left=0,right=m;
        while(left<=right){
            
            int mid=(right-left)/2+left;
            int k=midsize-mid;
            
            if(mid!=m&&nums1[mid]<nums2[k-1]){
                left=mid+1;
            }else if(mid!=0&&nums2[k]<nums1[mid-1]){
                right=mid-1;
            }else{
                int leftmax=-1;
                if(mid!=0&&k!=0){
                     leftmax=max(nums1[mid-1],nums2[k-1]);
                }else{
                    leftmax=(mid==0)?nums2[k-1]:nums1[mid-1];
                }
                
                if((m+n)%2==1){
                    return double(leftmax);
                }
                int rightmin=-1;
                if(mid!=m&&k!=n){
                    rightmin=min(nums1[mid],nums2[k]);
                }else{
                    rightmin=(mid==m)?nums2[k]:nums1[mid];
                }
                
                
                return double((leftmax+rightmin)/2.0);
            }
        }
        return -1;
    }
        


};