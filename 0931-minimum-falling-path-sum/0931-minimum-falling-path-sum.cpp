class Solution {
public:
    
    int solve(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp){
        if(j < 0 || j >= matrix.size()){
            return INT_MAX;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(i == matrix.size() - 1){
            return dp[i][j] = matrix[i][j];
        }

        int down = solve(i + 1, j, matrix, dp);
        int right = solve(i + 1, j + 1, matrix, dp);
        int left = solve(i + 1, j - 1, matrix, dp);

        return dp[i][j] = matrix[i][j] + min({down, left, right});

    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n, vector<int> (n, -1));

        int ans = INT_MAX;

        for(int j = 0; j < n; j++){
            dp[n - 1][j] = matrix[n - 1][j];
        }

        for(int i = n - 2; i >= 0; i--){
            for(int j = 0; j < n; j++){
                int down = dp[i + 1][j];
                int left = (j > 0) ? dp[i + 1][j - 1] : INT_MAX;
                int right = (j < n - 1) ? dp[i + 1][j + 1] : INT_MAX;

                dp[i][j] = matrix[i][j] + min({down, left, right});
            }
        }

        for(int j = 0; j < n; j++){
            ans = min(ans, dp[0][j]);
        }

        // for(int i = 0; i < n; i++){
        //     ans = min(ans, solve(0, i, matrix, dp));
        // }

        return ans;
    }
};