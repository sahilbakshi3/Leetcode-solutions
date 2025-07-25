class Solution {
public:
    
    int solve(int n, vector<int> &dp){
        if(n <= 2) return n;

        if(dp[n] != -1) return dp[n];

        return dp[n] = solve(n-1, dp) + solve(n-2, dp);
    }
    
    int climbStairs(int n) {
        // if(n == 0 || n == 1) return 1;

        // return climbStairs(n-1) + climbStairs(n-2);
        if(n<=2) return n;
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};