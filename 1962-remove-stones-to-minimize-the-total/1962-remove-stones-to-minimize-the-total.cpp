class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();

        // while(k--){
        //     int idx = 0;
        //     for(int i = 1; i< n; i++){
        //         if(piles[i] > piles[idx]){
        //             idx = i;
        //         }
        //     }

        //     piles[idx] -= piles[idx]/2;

        // }

        // while(k--){
        //     sort(piles.begin(), piles.end());

        //     piles[n-1] -= piles[n-1]/2;

        // }

        // int sum = 0;
        // for(auto &it: piles){
        //     sum += it;
        // }
        // return sum;

        priority_queue<int> pq;

        for(auto &it: piles){
            pq.push(it);
        }

        while(k--){
            int top = pq.top();
            pq.pop();

            int reduced = top - top/2;

            pq.push(reduced);
        }

        int sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }

        return sum;

    }
};