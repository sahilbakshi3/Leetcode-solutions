class Solution {
public:
    
    // int solve(int idx, int jumps, vector<int> &nums, vector<vector<int>> &dp){
    //     int n = nums.size();

    //     if(idx >= n-1){
    //         return jumps;
    //     }

    //     if(dp[idx][jumps] != -1){
    //         return dp[idx][jumps];
    //     }

    //     int mini = INT_MAX;

    //     for(int i = 1; i<= nums[idx]; i++){
    //         mini = min(mini, solve(idx+i, jumps+1, nums, dp));
    //     }
    //     return dp[idx][jumps] = mini;
    // }
    
    int jump(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> dp(n+1, vector<int> (n+1, -1));

        // return solve(0, 0, nums, dp);

        int l = 0, r = 0;
        int jumps = 0;

        while(r < n-1){
            int farthest = 0;
            for(int i = l; i<= r; i++){
                farthest = max(farthest, i + nums[i]);
            }
            l = r+1;
            r = farthest;
            jumps++;
        }
        return jumps;
    }
};