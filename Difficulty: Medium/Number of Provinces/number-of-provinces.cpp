//User function Template for C++

class Solution {
  public:
    
    
    void bfs(vector<vector<int>> &adj, int V, int node, vector<int> &vis){
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            for(int i = 0; i< V; i++){
                if(!vis[i] && adj[front][i] == 1){
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
    }
    
    
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> vis(V, 0);
        int ans = 0;
        for(int i = 0; i< V; i++){
            if(!vis[i]){
                bfs(adj, V, i, vis);
                ans++;
            }
        }
        return ans;
    }
};
