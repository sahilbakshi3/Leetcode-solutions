class Solution
{
    public:

        int m, n;

    int solve(int i, int j, int k, vector<vector < int>> &coins,
        vector<vector<vector< int>>> &dp)
    {

        int m = coins.size(), n = coins[0].size();

        if (i >= m || j >= n) return -1e9;

        if (dp[i][j][k] != -1e9) return dp[i][j][k];

        if (i == m - 1 && j == n - 1)
        {
            if (coins[i][j] < 0 && k > 0) return dp[i][j][k] = 0;
            return dp[i][j][k] = coins[i][j];
        }

        int val = coins[i][j];

        int take = val + max(solve(i + 1, j, k, coins, dp),
            solve(i, j + 1, k, coins, dp)
       );

        int skip = -1e9;
        if (val < 0 && k > 0)
        {
            skip = max(solve(i + 1, j, k - 1, coins, dp),
                solve(i, j + 1, k - 1, coins, dp)
           );
        }

        return dp[i][j][k] = max(take, skip);
    }

    int maximumAmount(vector<vector < int>> &coins)
    {
        int m = coins.size(), n = coins[0].size();

        vector<vector<vector< int>>> dp(m, vector<vector < int>> (n, vector<int> (3, -1e9)));

        return solve(0, 0, 2, coins, dp);
    }
};