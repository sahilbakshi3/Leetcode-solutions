class Solution {
public:
    
    int solve(int i, int deleted, vector<int> &arr, vector<vector<int>> &dp){

        if(i == arr.size()){
            return INT_MIN / 2;
        }

        if(dp[i][deleted] != INT_MIN){
            return dp[i][deleted];
        }

        if (deleted) {
            return dp[i][deleted] = max(arr[i], arr[i] + solve(i + 1, 1, arr, dp));
        }

        return dp[i][deleted] = max({arr[i], arr[i] + solve(i + 1, 0, arr, dp), solve(i + 1, 1, arr, dp)});

    }
    
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        vector<vector<int>> dp(n, vector<int> (2, INT_MIN));

        int ans = INT_MIN;

        for(int i = 0; i < n; i++){
            ans = max(ans, solve(i, 0, arr, dp));
        }

        return ans;
    }
};