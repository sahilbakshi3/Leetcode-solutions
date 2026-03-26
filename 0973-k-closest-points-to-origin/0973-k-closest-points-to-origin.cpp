class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n = points.size();

        priority_queue<pair<int, pair<int, int>>> pq;

        for(auto &it: points){
            int x = it[0];
            int y = it[1];

            int dist = x*x + y*y;

            pq.push({dist, {x, y}});

            if(pq.size() > k){
                pq.pop();
            }

        }

        vector<vector<int>> res;

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            res.push_back({it.second.first, it.second.second});
        }
        return res;
    }
};