class Solution {
public:
    
    double solve(int i, int j, int n, int k, vector<vector<vector<double>>> &dp){
        if(i < 0 || j < 0 || i >= n || j >= n){
            return 0;
        }

        if(k == 0){
            return 1;
        }

        if(dp[i][j][k] != -1){
            return dp[i][j][k];
        }

        int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
        int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

        double ans = 0;

        for(int x = 0; x < 8; x++){
            ans += solve(i + dx[x], j + dy[x], n, k - 1, dp) / 8;
        }

        return dp[i][j][k] = ans;

    }
    
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>> dp(n+1, vector<vector<double>>(n+1, vector<double>(k+1, -1)));
        return solve(row, column, n, k, dp);
    }
};