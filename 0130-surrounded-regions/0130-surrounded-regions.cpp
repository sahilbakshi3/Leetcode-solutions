class Solution {
public:
    
    void dfs(int row, int col, vector<vector<char>>& mat, vector<vector<int>> &vis){
        vis[row][col] = 1;
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i< 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && mat[nrow][ncol] == 'O'){
                dfs(nrow, ncol, mat, vis);
            }
        }

    }

    void bfs(int row, int col, vector<vector<char>>& mat, vector<vector<int>>& vis) {
        int n = mat.size();
        int m = mat[0].size();

        queue<pair<int, int>> q;
        q.push({row, col});
        vis[row][col] = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    vis[nrow][ncol] == 0 &&
                    mat[nrow][ncol] == 'O') {

                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    
    void solve(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));

        for(int i = 0; i< n; i++){
            if(mat[i][0] == 'O'){
                vis[i][0] = 1;
                // dfs(i, 0, mat, vis);
                bfs(i, 0, mat, vis);

            }
            if(mat[i][m-1] == 'O'){
                vis[i][m-1] = 1;
                // dfs(i, m-1, mat, vis);
                bfs(i, m-1, mat, vis);
            }
        }

        for(int j = 0; j< m; j++){
            if(mat[0][j] == 'O'){
                vis[0][j] = 1;
                // dfs(0, j, mat, vis);
                bfs(0, j, mat, vis);

            }
            if(mat[n-1][j] == 'O'){
                vis[n-1][j] = 1;
                // dfs(n-1, j, mat, vis);
                dfs(n-1, j, mat, vis);
                
            }
        }

        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(mat[i][j] == 'O' && vis[i][j] == 0){
                    mat[i][j] = 'X';
                }
            }
        }

    }
};