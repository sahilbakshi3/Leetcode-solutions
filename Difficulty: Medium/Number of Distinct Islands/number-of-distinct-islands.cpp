// User function Template for C++

class Solution {
  public:
    
    void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>> &vis, vector<pair<int, int>> &temp,
    int row0, int col0){
        
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        
        temp.push_back({row - row0, col - col0});
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};
        
        for(int i = 0; i< 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0
            ){
                dfs(nrow, ncol, grid, vis, temp, row0, col0);
            }
        }
        
    }
    
    void bfs(int row0, int col0,
             vector<vector<int>>& grid,
             vector<vector<int>>& vis,
             vector<pair<int,int>>& temp) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>> q;
        q.push({row0, col0});
        vis[row0][col0] = 1;
        
        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, -1, 0, 1};
        
        while(!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            
            // store relative position
            temp.push_back({row - row0, col - col0});
            
            for(int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n &&
                   ncol >= 0 && ncol < m &&
                   grid[nrow][ncol] == 1 &&
                   vis[nrow][ncol] == 0) {
                    
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int> (m, 0));
        
        queue<pair<int, int>> q;
        set<vector<pair<int, int>>> st;
        
        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(vis[i][j] == 0 && grid[i][j] == 1){
                    vector<pair<int, int>> temp;
                    // dfs(i, j, grid, vis, temp, i, j);
                    bfs(i, j, grid, vis, temp);
                    st.insert(temp);
                }
            }
        }
        
        return st.size();
        
    }
};
