class Solution {
public:
    
    int solve(int i, int j, vector<vector<int>>& triangle, int n, vector<vector<int>> &dp){
        if(i == n-1) return triangle[i][j];
        
        if(i>=n) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int d = triangle[i][j] + solve(i+1, j, triangle, n, dp);
        int dr = triangle[i][j] + solve(i+1, j+1, triangle, n, dp);
        
        return dp[i][j] = min(d, dr);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if (n == 0) return 0;

        // dp initialized with the last row
        vector<int> dp(triangle.back());

        // iterate from second-last row up to the first row
        for (int r = n - 2; r >= 0; --r) {
            vector<int> new_dp(r + 1);
            for (int j = 0; j <= r; ++j) {
                new_dp[j] = triangle[r][j] + min(dp[j], dp[j + 1]);
            }
            dp = move(new_dp); // reuse dp
        }
        return dp[0];
    }
};