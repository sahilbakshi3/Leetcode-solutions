class Solution {
public:
    
    bool check(int mid, vector<vector<int>> &cells, int row, int col){
        vector<vector<int>> grid(row, vector<int> (col, 0));

        for(int i = 0; i< mid; i++){
            grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
        }

        queue<pair<int, int>> q;
        vector<vector<int>> vis(row, vector<int> (col, 0));

        for(int j = 0; j< col; j++){
            if(grid[0][j] == 0){
                q.push({0, j});
                vis[0][j] = 1;
            }
        }

        int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            if(r == row - 1) return true;

            for(auto &it: dir){
                int new_row = r + it[0];
                int new_col = c + it[1];

                if(new_row >= 0 && new_row < row && new_col >= 0 && new_col < col && !vis[new_row][new_col] && grid[new_row][new_col] == 0){
                    vis[new_row][new_col] = 1;
                    q.push({new_row, new_col});
                }

            }
        }
        return false;


    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int low = 1;
        int high = cells.size();

        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(mid, cells, row, col)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }

        return ans;

    }
};