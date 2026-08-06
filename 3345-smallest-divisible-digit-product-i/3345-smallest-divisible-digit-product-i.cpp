class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int num=i;
            long long dp=1;
            while(num>0){
                dp*=(num%10);
                num/=10;
            }
            if(dp%t==0)return i;
        }
        return n;
    }
};