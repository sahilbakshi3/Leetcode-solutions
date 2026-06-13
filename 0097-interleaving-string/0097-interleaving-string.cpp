class Solution {
public:
    
    int n, m, l;

    bool solve(int i, int j, int k, string &s1, string &s2, string &s3, vector<vector<vector<int>>> &dp){
        if(i == n && j == m && k == l){
            return true;
        }

        if(k == l){
            return false;
        }

        if(dp[i][j][k] != -1) return dp[i][j][k];

        bool res = false;

        if(s1[i] == s3[k]){
            res = solve(i + 1, j, k + 1, s1, s2, s3, dp);
        }

        if(res == true) return res;

        if(s2[j] == s3[k]){
            res = solve(i, j + 1, k + 1, s1, s2, s3, dp);
        }

        return dp[i][j][k] = res;

    }
    
    bool isInterleave(string s1, string s2, string s3) {
        n = s1.length();
        m = s2.length();
        l = s3.length();

        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (m + 1, vector<int> (l + 1, -1)));

        return solve(0, 0, 0, s1, s2, s3, dp);
    }
};