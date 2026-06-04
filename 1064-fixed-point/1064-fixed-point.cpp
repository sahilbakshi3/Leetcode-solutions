class Solution {
public:
    int fixedPoint(vector<int>& arr) {

        int n = arr.size();

        // Brute Force - O(n), O(1)
        //
        // for(int i = 0; i < n; i++) {
        //     if(arr[i] == i) {
        //         return i;
        //     }
        // }
        //
        // return -1;


        // Better Solution
        //
        // Same as brute force since there is no meaningful
        // intermediate optimization before binary search.
        //
        // for(int i = 0; i < n; i++) {
        //     if(arr[i] == i) {
        //         return i;
        //     }
        // }
        //
        // return -1;


        // Optimal Solution - O(log n), O(1)

        int left = 0;
        int right = n - 1;

        int ans = -1;

        while(left <= right) {

            int mid = left + (right - left) / 2;

            if(arr[mid] >= mid) {

                if(arr[mid] == mid) {
                    ans = mid;
                }

                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return ans;
    }
};
