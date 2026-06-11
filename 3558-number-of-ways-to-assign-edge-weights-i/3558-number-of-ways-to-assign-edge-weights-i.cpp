class Solution {
public:

    static const int MOD = 1e9 + 7;
    
    long long powerFunction(long long base, long long exp){
        long long res = 1;

        while(exp > 0){
            if(exp & 1){
                res = (res * base) % MOD;
            }

            base = (base * base) % MOD;
            exp >>= 1;
        }

        return res;
    }
    
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;

        vector<vector<int>> adj(n + 1);

        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        queue<pair<int, int>> q;
        vector<int> vis(n+1, 0);

        q.push({1, 0});
        vis[1] = 1;

        int maxi = 0;

        while(!q.empty()){
            auto [node, depth] = q.front();
            q.pop();

            maxi = max(maxi, depth);

            for(auto &it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it, depth + 1});
                }
            }
        }

        return powerFunction(2, maxi - 1);

    }
};