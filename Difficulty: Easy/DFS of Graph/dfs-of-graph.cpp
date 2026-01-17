class Solution {
  public:
    
    void dfs(int node, vector<int> &vis, vector<int> &ls, vector<vector<int>> &adj){
        vis[node] = 1;
        ls.push_back(node);
        for(auto &it: adj[node]){
            if(!vis[it]){
                dfs(it, vis, ls, adj);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        int v = adj.size();
        vector<int> vis(v, 0);
        vector<int> ls;
        
        dfs(0, vis, ls, adj);
        
        return ls;
        
    }
};