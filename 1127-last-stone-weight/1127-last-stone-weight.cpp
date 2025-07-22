class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++) pq.push(stones[i]);
        
        while(pq.size()>=2)
        {
           int x = pq.top(); pq.pop();

           int y = pq.top(); pq.pop();

           if(x!=y) pq.push(abs(x-y));

        }
        if(pq.size()==0){ 
            return 0;
        }
        return pq.top();
    }
};