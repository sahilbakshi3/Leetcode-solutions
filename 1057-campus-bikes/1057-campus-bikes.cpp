class Solution {
public:
    vector<int> assignBikes(vector<vector<int>>& workers, vector<vector<int>>& bikes) {
                            
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        int n = workers.size();
        int m = bikes.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int dist =
                    abs(workers[i][0] - bikes[j][0]) +
                    abs(workers[i][1] - bikes[j][1]);

                pq.push({dist, i, j});
            }
        }

        vector<int> ans(n, -1);

        vector<bool> workerUsed(n, false);
        vector<bool> bikeUsed(m, false);

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int worker = top[1];
            int bike = top[2];

            if (workerUsed[worker] || bikeUsed[bike])
                continue;

            ans[worker] = bike;

            workerUsed[worker] = true;
            bikeUsed[bike] = true;
        }

        return ans;
    }
};
