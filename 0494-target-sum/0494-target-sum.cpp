class Solution {
public:
    
    int solve(int i, int sum, vector<int> &nums, vector<vector<int>> &dp){
        if(i == nums.size()){
            return (sum == 0);
        }

        if(dp[i][sum] != -1){
            return dp[i][sum];
        }

        int noTake = solve(i+1, sum, nums, dp);
        int take = 0;

        if(nums[i] <= sum){
            take = solve(i+1, sum - nums[i], nums, dp);
        }

        return dp[i][sum] = take + noTake;

    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totalSum = 0;

        for(int i = 0; i< n; i++){
            totalSum += nums[i];
        }

        if(abs(target) > totalSum || (totalSum + target)%2 != 0){
            return 0;
        }

        int sumOfPositives = (totalSum + target)/2;

        vector<vector<int>> dp(n, vector<int> (sumOfPositives + 1, -1));

        return solve(0, sumOfPositives, nums, dp);

    }
};