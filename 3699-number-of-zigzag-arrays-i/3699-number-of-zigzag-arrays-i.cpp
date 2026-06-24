class Solution {
public:

    int MOD = 1e9 + 7;
    typedef long long ll;
    int N, M;

    // int solve(int i, int prev, bool flag, vector<vector<vector<int>>> &dp){
        
    //     if(i == N){
    //         return 1;
    //     }

    //     if(dp[i][prev][flag] != -1){
    //         return dp[i][prev][flag];
    //     }

    //     ll res = 0;

    //     if(flag){
    //         for(int nextVal = prev + 1; nextVal <= M; nextVal++){
    //             res = (res + solve(i + 1, nextVal, false, dp)) % MOD;
    //         }
    //     }
    //     else {
    //         for(int nextVal = 1; nextVal < prev; nextVal++){
    //             res = (res + solve(i + 1, nextVal, true, dp)) % MOD;
    //         }
    //     }

    //     return dp[i][prev][flag] = res;
    // }

    int zigZagArrays(int n, int l, int r) {
        N = n;
        M = r - l + 1;

        ll res = 0;

        vector<vector<int>> next(M + 1, vector<int>(2, 1));
        vector<vector<int>> curr(M + 1, vector<int>(2));

        for (int i = n - 1; i >= 1; i--) {

            vector<long long> pref0(M + 1, 0);
            vector<long long> pref1(M + 1, 0);

            for (int v = 1; v <= M; v++) {
                pref0[v] = (pref0[v - 1] + next[v][0]) % MOD;
                pref1[v] = (pref1[v - 1] + next[v][1]) % MOD;
            }

            for (int prev = 1; prev <= M; prev++) {

                curr[prev][1] = (pref0[M] - pref0[prev] + MOD) % MOD;

                curr[prev][0] = pref1[prev - 1];
            }

            swap(curr, next);
        }

        for (int start = 1; start <= M; start++) {
            res = (res + next[start][0]) % MOD;
            res = (res + next[start][1]) % MOD;
        }

        // vector<vector<vector<int>>> dp(N + 1, vector<vector<int>> (M + 1, vector<int    > (2, -1)));

        // for(int startVal = 1; startVal <= M; startVal++){
        //     res = (res + solve(1, startVal, true, dp)) % MOD;

        //     res = (res + solve(1, startVal, false, dp)) % MOD;
        // }

        // for(int prev = 1; prev <= M; prev++) {
        //     dp[N][prev][0] = 1;
        //     dp[N][prev][1] = 1;
        // }

        // for(int i = N - 1; i >= 1; i--) {

        //     vector<ll> pref0(M + 1, 0);
        //     vector<ll> pref1(M + 1, 0);

        //     for(int v = 1; v <= M; v++) {
        //         pref0[v] = (pref0[v - 1] + dp[i + 1][v][0]) % MOD;
        //         pref1[v] = (pref1[v - 1] + dp[i + 1][v][1]) % MOD;
        //     }

        //     for(int prev = 1; prev <= M; prev++) {

        //         dp[i][prev][1] = (pref0[M] - pref0[prev] + MOD) % MOD;

        //         dp[i][prev][0] = pref1[prev - 1];
        //     }

        //     // for(int prev = 1; prev <= M; prev++) {

        //     //     ll res = 0;

        //     //     for(int next = prev + 1; next <= M; next++) {
        //     //         res = (ans + dp[i + 1][next][0]) % MOD;
        //     //     }

        //     //     dp[i][prev][1] = ans;

        //     //     ans = 0;

        //     //     for(int next = 1; next < prev; next++) {
        //     //         ans = (ans + dp[i + 1][next][1]) % MOD;
        //     //     }

        //     //     dp[i][prev][0] = ans;
        //     // }
        // }

        // for(int start = 1; start <= M; start++) {
        //     res = (res + dp[1][start][1]) % MOD;
        //     res = (res + dp[1][start][0]) % MOD;
        // }

        return (int)res;
    }
};