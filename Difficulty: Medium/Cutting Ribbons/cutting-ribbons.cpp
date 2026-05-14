class Solution {
public:

    bool canMake(vector<int>& ribbons, int k, int len) {

        int count = 0;

        for(int ribbon : ribbons) {
            count += ribbon / len;
        }

        return count >= k;
    }

    int maxLength(vector<int>& ribbons, int k) {

        int low = 1;

        int high = *max_element(ribbons.begin(), ribbons.end());

        int ans = 0;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(canMake(ribbons, k, mid)) {

                ans = mid;

                low = mid + 1;
            }
            else {

                high = mid - 1;
            }
        }

        return ans;
    }
};
