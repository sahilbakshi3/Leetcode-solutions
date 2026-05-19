class Solution {
public:

    bool canFind(vector<int>& nums, int k, double mid) {

        int n = nums.size();

        vector<double> prefix(n + 1, 0);

        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i] - mid;
        }

        double minPrefix = 0;

        for(int i = k; i <= n; i++) {

            minPrefix = min(minPrefix, prefix[i - k]);

            if(prefix[i] - minPrefix >= 0) {
                return true;
            }
        }

        return false;
    }

    double findMaxAverage(vector<int>& nums, int k) {

        double low = *min_element(nums.begin(), nums.end());
        double high = *max_element(nums.begin(), nums.end());

        double eps = 1e-5;

        while(high - low > eps) {

            double mid = low + (high - low) / 2.0;

            if(canFind(nums, k, mid)) {
                low = mid;
            }
            else {
                high = mid;
            }
        }

        return low;
    }
};
