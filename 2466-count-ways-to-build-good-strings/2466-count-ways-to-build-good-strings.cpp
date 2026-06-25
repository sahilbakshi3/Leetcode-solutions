class Solution {
public:
    
    int MOD = 1e9 + 7;

    int solve(int len, int low, int high, int zero, int one, vector<int> &dp){

        if(len > high){
            return 0;
        }

        if(dp[len] != -1){
            return dp[len];
        }

        long long ans = 0;

        if(len >= low){
            ans++;
        }

        ans = (ans + solve(len + zero, low, high, zero, one, dp)) % MOD;

        ans = (ans + solve(len + one, low, high, zero, one, dp)) % MOD;

        return dp[len] = ans;
    }
    
    int countGoodStrings(int low, int high, int zero, int one) {

        vector<int> dp(high + 1,-1);

        return solve(0, low, high, zero, one, dp);
    }
};