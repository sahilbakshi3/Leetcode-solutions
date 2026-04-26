class Solution {
public:
    
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    bool hasCycle(int x, int y, int px, int py, char color, vector<vector<char>>& grid, vector<vector<bool>>& visited) {

        visited[x][y] = true;

        int m = grid.size();
        int n = grid[0].size();
        
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            

            if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == color) {
                if (visited[nx][ny]) {
                    
                    if (nx != px || ny != py) {
                        return true;
                    }
                } else {
                   
                    if (hasCycle(nx, ny, x, y, color, grid, visited)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j]) {
                    // Start DFS for each unvisited component
                    if (hasCycle(i, j, -1, -1, grid[i][j], grid, visited)) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};