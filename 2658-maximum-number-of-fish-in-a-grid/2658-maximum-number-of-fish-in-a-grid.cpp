class Solution {
public:
    
    int n, m;

    int dfs(int row, int col, vector<vector<int>> &grid){

        if(row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == 0){
            return 0;
        }

        int ans = grid[row][col];
        grid[row][col] = 0;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};


        for(int i = 0; i< 4; i++){
            ans += dfs(row + delrow[i], col + delcol[i], grid);
        }

        return ans;

    }

    int bfs(int row, int col, vector<vector<int>> &grid){
        queue<pair<int, int>> q;
        q.push({row, col});

        int ans = grid[row][col];
        grid[row][col] = 0;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] > 0){
                    ans += grid[nrow][ncol];
                    grid[nrow][ncol] = 0;
                    q.push({nrow, ncol});
                }
            }
        }
        return ans;

    }
    
    int findMaxFish(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int maxFish = 0;

        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] > 0){
                    // maxFish = max(maxFish, dfs(i, j, grid));
                    maxFish = max(maxFish, bfs(i, j, grid));
                }
            }
        }
        return maxFish;
    }
};