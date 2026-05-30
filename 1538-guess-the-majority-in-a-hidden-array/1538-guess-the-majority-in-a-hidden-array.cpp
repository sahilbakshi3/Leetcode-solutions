/**
 * // This is the ArrayReader's API interface.
 * class ArrayReader {
 * public:
 *     int query(int a, int b, int c, int d);
 *     int length();
 * };
 */

class Solution {
public:

    int guessMajority(ArrayReader &reader) {

        int n = reader.length();

        int base = reader.query(0, 1, 2, 3);

        int same = 1;
        int diff = 0;

        int differentIndex = -1;

        for (int i = 4; i < n; i++) {

            if (reader.query(0, 1, 2, i) == base) {

                same++;
            }
            else {

                diff++;
                differentIndex = i;
            }
        }

        if (reader.query(1, 2, 3, 4) == base) {

            same++;
        }
          
        else {

            diff++;
            differentIndex = 0;
        }

        if (reader.query(0, 2, 3, 4) == base) {
            same++;
        }
          
        else {

            diff++;
            differentIndex = 1;
        }

        if (reader.query(0, 1, 3, 4) == base) {

            same++;
        }
          
        else {
            diff++;
            differentIndex = 2;
        }

        if (same > diff) {
            return 3;
        }

        if (diff > same) {
            return differentIndex;
        }

        return -1;
    }
};
