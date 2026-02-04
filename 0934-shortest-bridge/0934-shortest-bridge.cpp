class Solution {
public:
    
    int n;



    void dfs(int row, int col, vector<vector<int>>& grid, queue<pair<pair<int, int>, int>> &q){

        if(row < 0 || row >= n || col < 0 || col >= n || grid[row][col] != 1){
            return ;
        }

        grid[row][col] = 2;

        q.push({{row, col}, 0});

            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, -1, 0, 1};

        for(int i = 0; i< 4; i++){
            dfs(row + delrow[i], col + delcol[i], grid, q);
        }

    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        n = grid.size();

        queue<pair<pair<int, int>, int>> q;

        bool flag = false;

        for(int i = 0; i< n && !flag; i++){
            for(int j = 0; j< n && !flag; j++){
                if(grid[i][j] == 1){
                    dfs(i, j, grid, q);
                    flag = true;
                }
            }
        }

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n){
                    if(grid[nrow][ncol] == 1){
                        return dist;
                    }

                    if(grid[nrow][ncol] == 0){
                        grid[nrow][ncol] = 2;
                        q.push({{nrow, ncol}, dist + 1});
                    }
                }

            }   

        }

        return -1;
    }
};