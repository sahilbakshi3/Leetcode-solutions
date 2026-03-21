class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto& row : grid) {
            
            auto it = lower_bound(row.begin(), row.end(), -1, greater<int>());
            count += row.end() - it;
        }
        return count;
    }
};