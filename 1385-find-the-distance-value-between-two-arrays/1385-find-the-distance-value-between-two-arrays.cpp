class Solution {
public:
    
    int lowerBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int count = 0;

        for (int x : arr1) {
            int left = x - d;
            int right = x + d;

            int idx = lowerBound(arr2, left);

            if (idx == arr2.size() || arr2[idx] > right) {
                count++;
            }
        }

        return count;
    }
};