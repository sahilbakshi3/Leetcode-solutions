class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();

        int sum = 0;

        for(int i = 0; i < k; i++){
            sum += arr[i];
        }

        int ans = sum;

        int right = n - 1;

        for(int left = k - 1; left >= 0; left--){
            sum -= arr[left];
            sum += arr[right];

            right--;

            ans = max(ans, sum);
        }

        return ans;
    }
};