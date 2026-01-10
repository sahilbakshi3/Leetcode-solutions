class Solution {
  public:
    
    int f(int i, int j, vector<int> &arr, vector<vector<int>> &dp) {
    if (i == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int res = INT_MAX, curr = 0;
    for (int k = i; k < j; k++) {
                
        int l = f(i, k, arr, dp);
        int r = f(k + 1, j, arr, dp);
            
        curr =  l + r +  (arr[i - 1] * arr[k] * arr[j]);

        res = min(curr, res);
    }
    return dp[i][j] = res;
}
    
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
    vector<vector<int>> dp(n, vector<int> (n, -1));
    return f(1, n - 1, arr, dp);
    }
};