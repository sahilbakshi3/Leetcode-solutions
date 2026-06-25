class Solution {
public:
    
    const int MOD = 1e9 + 7;

    int solve(int i, int finish, int fuel, vector<int> &locations, vector<vector<int>> &dp){
        if(fuel < 0){
            return 0;
        }

        if(dp[i][fuel] != -1){
            return dp[i][fuel];
        }

        int ans = 0;

        if(i == finish){
            ans += 1;
        }

        for(int j = 0; j < locations.size(); j++){
            if(i != j){
                int temp = fuel - abs(locations[i] - locations[j]);

                ans = (ans + solve(j, finish, temp, locations, dp)) % MOD;
            }
        }

        return dp[i][fuel] = ans;

    }
    
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();

        vector<vector<int>> dp(n, vector<int> (fuel + 1, -1));
        return solve(start, finish, fuel, locations, dp);
    }
};