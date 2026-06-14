class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
        int n = arr.size();

        sort(arr.begin(), arr.end());

        for (int i = n - 1; i >= 2; i--) {
            if (arr[i - 2] + arr[i - 1] > arr[i]) {
                return arr[i - 2] + arr[i - 1] + arr[i];
            }
        }

        return -1;
    }
};