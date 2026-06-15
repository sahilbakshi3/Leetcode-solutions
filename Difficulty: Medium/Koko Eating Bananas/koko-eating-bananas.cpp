class Solution {
  public:
    
    bool canFinish(vector<int>& arr, int k, int speed) {

        long long hours = 0;

        for(int pile : arr) {
            hours += (pile + speed - 1) / speed;
        }

        return hours <= k;
    }
    
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        int ans = high;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(canFinish(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};