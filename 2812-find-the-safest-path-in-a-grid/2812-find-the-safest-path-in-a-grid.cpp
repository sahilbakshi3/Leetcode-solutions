class Solution {
public:
    
    bool solve(int mid, int n, vector<vector<int>> &dist){
        if(dist[0][0] < mid){
            return false;
        }

        queue<pair<int, int>> q;
        vector<vector<bool>> vis(n, vector<bool> (n, false));

        q.push({0, 0});
        vis[0][0] = true;

        vector<int> drow = {-1, 0, 1, 0};
        vector<int> dcol = {0, -1, 0, 1};

        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            if(r == n-1 && c == n-1){
                return true;
            }

            for(int i = 0; i< 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && dist[nrow][ncol] >= mid && !vis[nrow][ncol]){
                    vis[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
        return false;

    }
    
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return 0;

        vector<vector<int>> dist(n, vector<int> (n, -1));
        queue<pair<int, int>> q;

        for(int i = 0; i< n; i++){
            for(int j = 0; j< n; j++){
                if(grid[i][j] == 1){
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        int max_dist = 0;
        vector<int> drow = {-1, 0, 1, 0};
        vector<int> dcol = {0, -1, 0, 1};

        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && dist[nrow][ncol] == -1){
                    dist[nrow][ncol] = dist[r][c] + 1;
                    max_dist = max(max_dist, dist[nrow][ncol]);
                    q.push({nrow, ncol});
                }
            }
        }

        int low = 1, high = 400;

        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(solve(mid, n, dist)){
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