class Solution {
public:
    
    int solve(string word1, string word2, int i, int j, vector<vector<int>>&dp) {
        if(word2.size() == j) return word1.size()-i;

        if(i == word1.size()) return word2.size()-j;

        if(dp[i][j]!=-1) return dp[i][j];

        int a=INT_MAX,b,c,d;

        if(word2[j] == word1[i])
            a = solve(word1, word2, i+1, j+1, dp);

        b = solve(word1, word2, i+1, j+1, dp) + 1;
 
        c = solve(word1, word2, i+1, j, dp) + 1;

        d = solve(word1, word2, i, j+1, dp) + 1;

        return dp[i][j] =  min(a,min(b, min(c, d)));
    }
    
    
    int minDistance(string word1, string word2) {
        
        int m = word1.size(), n = word2.size();
        
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return solve(word1, word2, 0, 0, dp);
    }
};