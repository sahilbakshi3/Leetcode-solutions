class Solution {
public:
    
    int n, m;

    int bfs(int r, int c, vector<vector<int>>& grid){
        queue<pair<int, int>> q;
        q.push({r, c});
        grid[r][c] = 0;

        int area = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m && grid[nrow][ncol] == 1){
                    grid[nrow][ncol] = 0;
                    q.push({nrow, ncol});
                    area++;
                }
            }
        }
        return area;
    }

    int dfs(int r, int c, vector<vector<int>> &grid){

        if(r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == 0){
            return 0;
        }

        grid[r][c] = 0;
        int area = 1;
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        for(int i = 0; i< 4; i++){
            area += dfs(r + delrow[i], c + delcol[i], grid);
        }
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int maxArea = 0;
        

        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] == 1){
                    // maxArea = max(maxArea, bfs(i, j, grid));
                    maxArea = max(maxArea, dfs(i, j, grid));
                }
            }
        }
        return maxArea;
    }
};