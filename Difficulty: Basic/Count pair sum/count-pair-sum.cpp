
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here.
        int n = arr1.size();
        int m = arr2.size();

        int i = 0;
        int j = m - 1;
        int cnt = 0;

        while (i < n && j >= 0) {
            int sum = arr1[i] + arr2[j];

            if (sum == x) {
                cnt++;
                i++;
                j--;
            }
            else if (sum < x) {
                i++;
            }
            else {
                j--;
            }
        }

        return cnt;
    }
};