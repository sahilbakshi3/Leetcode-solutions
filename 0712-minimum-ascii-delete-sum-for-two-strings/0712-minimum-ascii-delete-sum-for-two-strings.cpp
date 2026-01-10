class Solution {
public:
    
    int solve(int i, int j, string &s1, string &s2, int n, int m, vector<vector<int>> &dp){
        if(i >= n && j >= m){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(i >= n){
            return dp[i][j] = s2[j] + solve(i, j+1, s1, s2, n, m, dp);
        }

        if(j >= m){
            return dp[i][j] = s1[i] + solve(i+1, j, s1, s2, n, m, dp);
        }

        if(s1[i] == s2[j]){
            return dp[i][j] = solve(i+1, j+1, s1, s2, n, m, dp);
        }

        // two cases

        int a = s1[i] + solve(i+1, j, s1, s2, n, m, dp);
        int b = s2[j] + solve(i, j+1, s1, s2, n, m, dp);

        return dp[i][j] = min(a, b);


    }

    int minimumDeleteSum(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        vector<vector<int>> dp(1001, vector<int> (1001, -1));

        return solve(0, 0, s1, s2, n, m, dp);

    }
};