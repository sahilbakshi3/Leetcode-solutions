class Solution {
public:

    bool confusingNumber(int n) {

        vector<int> rotate = {
            0, 1, -1, -1, -1,
            -1, 9, -1, 8, 6
        };

        int original = n;

        long long rotated = 0;

        while (n > 0) {

            int digit = n % 10;

            if (rotate[digit] == -1) {
                return false;
            }

            rotated = rotated * 10 + rotate[digit];

            n /= 10;
        }

        return rotated != original;
    }
};
