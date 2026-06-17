class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int cnt = 0;

        for (int num : arr) {
            if (num <= x)
                cnt++;
        }

        return cnt;
    }
};