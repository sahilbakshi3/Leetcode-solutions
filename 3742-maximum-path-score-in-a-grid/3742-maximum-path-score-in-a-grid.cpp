class Solution {
public:

    int n, m;
    
    int solve(int i, int j, int k, int cost, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
        if(i >= n || j >= m){
            return INT_MIN;
        }

        int newCost = cost + (grid[i][j] > 0);

        if(newCost > k){
            return dp[i][j][cost] = INT_MIN;
        }

        if(i == n - 1 && j == m - 1){
            return dp[i][j][cost] = grid[i][j];
        }

        if(dp[i][j][cost] != -1){
            return dp[i][j][cost];
        }

        int right = solve(i + 1, j, k, newCost, grid, dp);
        int down = solve(i, j + 1, k, newCost, grid, dp);

        int ans = max(down, right);

        if(ans == INT_MIN){
            return dp[i][j][cost] = INT_MIN;
        }

        return dp[i][j][cost] = grid[i][j] + ans;
    }
    
    int maxPathScore(vector<vector<int>>& grid, int k) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k+1, -1)));

        int ans = solve(0, 0, k, 0, grid, dp);

        return ans == INT_MIN ? -1 : ans;
    }
};