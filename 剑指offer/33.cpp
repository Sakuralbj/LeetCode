class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        int len=postorder.size();
        return Posthelp(postorder,0,len-1);


    }
    bool Posthelp(vector<int>postorder,int start,int end){
        if(start>=end){
            return true;
        }
        int last=postorder[end];
        int i;
        for( i=start;i<end;i++){
            if(postorder[i]>last){
                break;
            }
        }
        for(int j=i;j<end;j++){
            if(postorder[j]<last){
                return false;
            }
        }
        return Posthelp(postorder, start, i-1)&&Posthelp(postorder,i,end-1);
    }
};