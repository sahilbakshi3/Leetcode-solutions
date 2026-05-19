class Solution {
public:

    bool canDivide(vector<int>& sweetness, int k, int mid) {

        int pieces = 0;
        int currSum = 0;

        for(int s : sweetness) {

            currSum += s;

            if(currSum >= mid) {
                pieces++;
                currSum = 0;
            }
        }

        return pieces >= k + 1;
    }

    int maximizeSweetness(vector<int>& sweetness, int k) {

        int low = 1;
        int high = accumulate(sweetness.begin(), sweetness.end(), 0) / (k + 1);

        int ans = 0;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(canDivide(sweetness, k, mid)) {
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
