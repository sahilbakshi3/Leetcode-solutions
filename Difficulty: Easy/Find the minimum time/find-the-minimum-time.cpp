// User function Template for C++

class Solution {
  public:
    int minTime(int S1, int S2, int N) {
        // code here
        long long low = 0;
        long long high = 1LL * min(S1, S2) * N;

        long long ans = high;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            long long docs = mid / S1 + mid / S2;

            if (docs >= N) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return (int)ans;
    }
};