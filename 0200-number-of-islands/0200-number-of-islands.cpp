class Solution {
public:
    
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        q.push({row, col});
        vis[row][col] = 1;

        // 4-direction movement (THIS is the key fix)
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    !vis[nr][nc] &&
                    grid[nr][nc] == '1') {

                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        // 4-direction movement only
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        for (int k = 0; k < 4; k++) {
            int nr = row + dr[k];
            int nc = col + dc[k];

            if (nr >= 0 && nr < n &&
                nc >= 0 && nc < m &&
                !vis[nr][nc] &&
                grid[nr][nc] == '1') {

                dfs(nr, nc, vis, grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        int cnt = 0;

        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    cnt++;
                    // bfs(row, col, vis, grid);
                    dfs(row, col, vis, grid);
                }
            }
        }
        return cnt;
    }
};