class Solution {
public:

    // int ans = INT_MAX;
    
    // void dfs(int node, vector<vector<pair<int, int>>> &adj, vector<int> &vis){
    //     vis[node] = 1;

    //     for(auto &it : adj[node]){

    //         int next = it.first;
    //         int weight = it.second;

    //         ans = min(ans, weight);

    //         if(!vis[next]){
    //             dfs(next, adj, vis);
    //         }

    //     }

    // }
    
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n+1);

        for(auto &it : roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        vector<int> vis(n+1, 0);

        // dfs(1, adj, vis);

        // return ans;

        queue<int> q;
        
        q.push(1);
        vis[1] = 1;
        
        int ans = INT_MAX;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            for(auto &it : adj[node]) {
                int nxt = it.first;
                int wt  = it.second;
                
                ans = min(ans, wt);
                
                if(!vis[nxt]) {
                    vis[nxt] = 1;
                    q.push(nxt);
                }
            }
        }
        
        return ans;


    }
};