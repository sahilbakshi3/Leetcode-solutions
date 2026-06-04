/**
 * // This is ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {

        // Brute Force
        //
        // int idx = 0;
        //
        // while(reader.get(idx) != 2147483647) {
        //
        //     if(reader.get(idx) == target) {
        //         return idx;
        //     }
        //
        //     idx++;
        // }
        //
        // return -1;


        // Better Solution
        //
        // int low = 0;
        // int high = 1;
        //
        // while(reader.get(high) != 2147483647 &&
        //       reader.get(high) < target) {
        //
        //     high *= 2;
        // }
        //
        // for(int i = low; i <= high; i++) {
        //
        //     if(reader.get(i) == target) {
        //         return i;
        //     }
        // }
        //
        // return -1;


        // Optimal Solution

        int low = 0;
        int high = 1;

        while(reader.get(high) < target) {
            low = high;
            high <<= 1;
        }

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int value = reader.get(mid);

            if(value == target) {
                return mid;
            }

            if(value > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return -1;
    }
};
