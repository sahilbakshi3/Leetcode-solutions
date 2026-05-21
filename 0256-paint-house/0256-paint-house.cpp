class Solution {
public:

    int minCost(vector<vector<int>>& costs) {

        int r = 0;
        int b = 0;
        int g = 0;

        for (auto& cost : costs) {

            int newR = cost[0] + min(b, g);

            int newB = cost[1] + min(r, g);

            int newG = cost[2] + min(r, b);

            r = newR;
            b = newB;
            g = newG;
        }

        return min({r, b, g});
    }
};
