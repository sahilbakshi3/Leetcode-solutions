class Solution {
public:

    vector<vector<int>> removeInterval(vector<vector<int>>& intervals, vector<int>& toBeRemoved) {

        int x = toBeRemoved[0];
        int y = toBeRemoved[1];

        vector<vector<int>> ans;

        for (auto& interval : intervals) {

            int a = interval[0];
            int b = interval[1];

            if (b <= x || a >= y) {
                ans.push_back({a, b});
                continue;
            }

            if (a < x) {
                ans.push_back({a, x});
            }

            if (b > y) {
                ans.push_back({y, b});
            }
        }

        return ans;
    }
};
