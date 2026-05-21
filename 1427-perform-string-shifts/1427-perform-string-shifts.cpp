class Solution {
public:

    string stringShift(string s, vector<vector<int>>& shift) {

        int n = s.size();
        int netShift = 0;

        for (auto& op : shift) {

            int direction = op[0];
            int amount = op[1];

            if (direction == 0) {
                netShift -= amount;
            }
            else {
                netShift += amount;
            }
        }


        netShift = ((netShift % n) + n) % n;

        return s.substr(n - netShift) + s.substr(0, n - netShift);
    }
};
