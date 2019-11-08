//
// Created by 马建波 on 2019-11-08.
//

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;

        int i=0,j=height.size()-1;
        while (i<j){
            int temp=(j-i)*min(height[i],height[j]);
            if(temp>result){
                result=temp;
            }
            if(height[i]>=height[j]){
                j--;
            } else{
                i++;
            }




        }
        return result;

    }
};

