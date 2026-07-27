class Solution {
public:
    int maxProduct(vector<int>& num) {
        int big=0;
        int sbig=0;
        for(int i=0;i<num.size();i++){
            if(num[i]>big){
                sbig=big;
                big=num[i];
            }
            else {
                sbig=max(num[i],sbig);
            }
        }
        return(big-1)*(sbig-1);
        
    }
};