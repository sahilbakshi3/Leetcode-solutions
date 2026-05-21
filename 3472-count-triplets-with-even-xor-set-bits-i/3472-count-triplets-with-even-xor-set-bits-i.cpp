class Solution {
public:

    int parity(int x) {

        return __builtin_popcount(x) % 2;
    }

    long long countTriplets(vector<int>& a, vector<int>& b, vector<int>& c) {

        long long evenA = 0, oddA = 0;
        long long evenB = 0, oddB = 0;
        long long evenC = 0, oddC = 0;

        for (int x : a) {

            if (parity(x) == 0) {
                evenA++;
            }
            else {
                oddA++;
            }
        }

        for (int x : b) {

            if (parity(x) == 0) {
                evenB++;
            }
            else {
                oddB++;
            }
        }

        for (int x : c) {

            if (parity(x) == 0) {
                evenC++;
            }
            else {
                oddC++;
            }
        }

        return
            evenA * evenB * evenC + evenA * oddB * oddC + oddA * evenB * oddC + oddA * oddB * evenC;
    }
};
