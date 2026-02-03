class Solution {
public:
    
    int n, m;

    int dfs(int r, int c, vector<vector<int>> &grid){

        if(r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == 0){
            return 0;
        }

        int gold = grid[r][c];
        grid[r][c] = 0;


        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        int maxi = 0;

        for(int i = 0; i< 4; i++){
            maxi = max(maxi, dfs(r + delrow[i], c + delcol[i], grid));
        }

        grid[r][c] = gold;

        return gold + maxi;;
        
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int ans = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] > 0){
                    ans = max(ans, dfs(i, j, grid));
                }
            }
        }
        return ans;
    }
};