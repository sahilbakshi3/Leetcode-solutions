class Solution {
public:

    unordered_map<int, int> rotateMap = {
        {0, 0},
        {1, 1},
        {6, 9},
        {8, 8},
        {9, 6}
    };

    int ans = 0;

    bool isConfusing(long long num) {

        long long original = num;
        long long rotated = 0;

        while (num > 0) {

            int digit = num % 10;

            rotated = rotated * 10 + rotateMap[digit];

            num /= 10;
        }

        return rotated != original;
    }

    void dfs(long long curr, int n) {

        if (curr > n) {
            return;
        }

        if (isConfusing(curr)) {
            ans++;
        }

        vector<int> digits = {0, 1, 6, 8, 9};

        for (int digit : digits) {

            long long next = curr * 10 + digit;

            if (next == 0) {
                continue;
            }

            dfs(next, n);
        }
    }

    int confusingNumberII(int n) {

        dfs(0, n);

        return ans;
    }
};
