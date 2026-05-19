/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:

    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {

        vector<int> dims = binaryMatrix.dimensions();

        int rows = dims[0];
        int cols = dims[1];

        int ans = cols;

        for(int i = 0; i < rows; i++) {

            int low = 0;
            int high = cols - 1;

            while(low <= high) {

                int mid = low + (high - low) / 2;

                if(binaryMatrix.get(i, mid) == 1) {
                    ans = min(ans, mid);
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
        }

        return (ans == cols) ? -1 : ans;
    }
};
