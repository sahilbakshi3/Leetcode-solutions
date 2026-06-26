class Solution {
public:
    
    string states[12] = {
        "RYG",
        "RGY",
        "RYR",
        "RGR",
        "YRG",
        "YGR",
        "YGY",
        "YRY",
        "GRY",
        "GYR",
        "GRG",
        "GYG"
    };

    int MOD = 1e9 + 7;

    int solve(int n, int prev, vector<vector<int>> &dp){
        if(n == 0){
            return 1;
        }

        if(dp[n][prev] != -1){
            return dp[n][prev];
        }

        int res = 0;
        string last = states[prev];

        for(int curr = 0; curr < 12; curr++){
            if(curr == prev){
                continue;
            }

            string currPattern = states[curr];
            bool flag = false;

            for(int col = 0; col < 3; col++){
                if(currPattern[col] == last[col]){
                    flag = true;
                    break;
                }
            }

            if(!flag){
                res = (res + solve(n - 1, curr, dp)) % MOD;
            }
        }

        return dp[n][prev] = res;
    }
    
    int numOfWays(int n) {

        vector<vector<int>> dp(n + 1, vector<int> (12, -1));

        int res = 0;

        for(int i = 0; i < 12; i++){
            res = (res + solve(n - 1, i, dp)) % MOD;
        }

        return res;
    }
};