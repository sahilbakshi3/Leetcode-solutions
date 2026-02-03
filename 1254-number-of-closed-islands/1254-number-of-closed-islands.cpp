class Solution {
public:

    int n, m;
    
    void bfs(int row, int col, vector<vector<int>>& grid){
        queue<pair<int, int>> q;
        q.push({row, col});
        grid[row][col] = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0){
                    grid[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i = 0; i< n; i++){
            if(grid[i][0] == 0){
                bfs(i, 0, grid);
            }

            if(grid[i][m-1] == 0){
                bfs(i, m-1, grid);
            }
        }

        for(int j = 0; j< m; j++){
            if(grid[0][j] == 0){
                bfs(0, j, grid);
            }
            if(grid[n-1][j] == 0){
                bfs(n-1, j, grid);
            }
        }

        int cnt = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] == 0){
                    cnt++;
                    bfs(i, j, grid);
                }
            }
        }
        return cnt;
    }
};