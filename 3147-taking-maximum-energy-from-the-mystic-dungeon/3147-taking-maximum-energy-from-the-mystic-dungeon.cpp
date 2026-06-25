class Solution {
public:
    
    int solve(int i, int k, vector<int> &energy, vector<int> &dp){
        if(i >= energy.size()){
            return 0;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        return dp[i] = energy[i] + solve(i + k, k, energy, dp);

    }
    
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();

        vector<int> dp(n + 1, -1);

        int ans = INT_MIN;

        // for(int i = 0; i < n; i++){
        //     ans = max(ans, solve(i, k, energy, dp));
        // }

        for(int i = n - 1; i >= 0; i--){
            dp[i] = energy[i];

            if(i + k < n){
                dp[i] += dp[i + k];
            }

            ans = max(ans, dp[i]);
        }

        return ans;

    }
};