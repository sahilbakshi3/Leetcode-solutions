class Solution {
  public:
    
    int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        if(i == s1.length()){
            return s2.length() - j;
        }
        
        if(j == s2.length()){
            return s1.length() - i;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(s1[i] == s2[j]){
            return 1 + solve(i + 1, j + 1, s1, s2, dp);
        }
        
        else{
            return 1 + min(solve(i + 1, j, s1, s2, dp), solve(i, j + 1, s1, s2, dp));
        }
    }
    
    int minSuperSeq(string &s1, string &s2) {
        // code here
        int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n + 1, vector<int> (m + 1));
        
        for(int i = 0; i <= n; i++){
            dp[i][m] = n - i;
        }
        
        for(int j = 0; j <= m; j++){
            dp[n][j] = m - j;
        }
        
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                if(s1[i] == s2[j]){
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
                else{
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j + 1]);
                }
            }
        }
        
        return dp[0][0];
        
        // return solve(0, 0, s1, s2, dp);
    }
};