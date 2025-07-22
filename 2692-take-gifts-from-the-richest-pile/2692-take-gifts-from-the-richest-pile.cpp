class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;

        for(auto it: gifts){
            pq.push(it);
        }

        long long sum = 0, x;

        while(k--){
            x = sqrt(pq.top());
            pq.pop();
            pq.push(x);
        }

        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};