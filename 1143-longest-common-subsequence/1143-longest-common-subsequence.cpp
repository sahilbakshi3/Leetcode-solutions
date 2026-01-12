class Solution {
public:
    
    int solve(int i, int j, int n, int m, string &text1, string &text2, vector<vector<int>> &dp){
        if(i >= text1.length()){
            return 0;
        }

        if(j >= text2.length()){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(text1[i] == text2[j]){
            return dp[i][j] = 1 + solve(i+1, j+1, n, m, text1, text2, dp);
        }

        int a = solve(i+1, j, n, m, text1, text2, dp);
        int b = solve(i, j+1, n, m, text1, text2, dp);

        return dp[i][j] = max(a, b);        

    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.length();
        int m = text2.length();

        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));

        return solve(0, 0, n, m, text1, text2, dp);

    }
};