class Solution {
public:

    int MOD = 1e9 + 7;
    
    int solve(int i, int k, string &s, vector<int> &dp){
        if(i == s.length()) {
            return 1;
        }

        if(s[i] == '0') {
            return 0;

        }

        if(dp[i] != -1) return dp[i];

        long long num = 0;
        long long ans = 0;

        for(int j = i; j < s.length(); j++) {
            num = num * 10 + (s[j] - '0');

            if(num > k){
                break;
            }

            ans = (ans + solve(j + 1, k, s, dp)) % MOD;
        }

        return dp[i] = ans;

    }
    
    int numberOfArrays(string s, int k) {
        int n = s.length();

        vector<int> dp(n, -1);

        return solve(0, k, s, dp);
    }
};