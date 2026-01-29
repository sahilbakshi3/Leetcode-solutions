class Solution {
  public:
    
    bool dfs(int node, int parent, vector<vector<int>> &adj, vector<int> vis){
        vis[node] = 1;
        for(auto &it: adj[node]){
            if(!vis[it]){
                if(dfs(it, node, adj, vis)){
                    return true;
                }
                
            }
            else if (it != parent){
                return true;
            }
        }
        return false;
    }
    
    bool bfs(int src, vector<vector<int>> &adj, vector<int> &vis){
        vis[src] = 1;
        queue<pair<int, int>> q;
        q.push({src, -1});
        
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto &it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it, node});
                }
                else if(it != parent){
                    return true;
                }
            }
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        vector<int> vis(V, false);
        
        for(auto &it: edges){
            int u = it[0];
            int v = it[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        for(int i = 0; i< V; i++){
            if(!vis[i]){
                // if(dfs(i, -1, adj, vis)){
                //     return true;
                // }
                if(bfs(i, adj, vis)){
                    return true;
                }
            }
        }
        return false;
        
        
    }
};