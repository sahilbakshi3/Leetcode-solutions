class Solution {
public:
    
    int solve(int i, int j, int n, int m, vector<int>& nums1, vector<int>& nums2, vector<vector<int>> &dp){
        if(i >= n || j >= m){
            return INT_MIN/2;
        }

        if(dp[i][j] != INT_MIN){
            return dp[i][j];
        }

        int currPorduct = nums1[i] * nums2[j];

        int a = solve(i+1, j, n, m, nums1, nums2, dp);
        int b = solve(i, j+1, n, m, nums1, nums2, dp);
        int c = solve(i+1, j+1, n, m, nums1, nums2, dp);

        dp[i][j] = max({(currPorduct + c), a, b, currPorduct});
        return dp[i][j];
    }
    
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> dp(n, vector<int> (m, INT_MIN));

        return solve(0, 0, n, m, nums1, nums2, dp);
    }
};