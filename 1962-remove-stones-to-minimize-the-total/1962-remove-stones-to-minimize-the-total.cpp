class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // while (k--) {
        //     auto it = max_element(piles.begin(), piles.end());
        //     int max_ind = it - piles.begin();
        //    piles[max_ind] -= piles[max_ind] / 2;
        // }
        // int sum = 0;
        // for (int i = 0; i < piles.size(); i++) {
        //     sum += piles[i];
        // }
        // return sum;


        priority_queue<int>pq;
        for(auto i:piles){
            pq.push(i);
        }

        while(k--){
           int x= pq.top();
           pq.pop();
           x=x-x/2;
           pq.push(x);
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};