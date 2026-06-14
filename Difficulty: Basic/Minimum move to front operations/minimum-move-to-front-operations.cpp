class Solution {
  public:
    // Function to find the minimum number of moves required.
    int minMoves(vector<int> &arr) {
        // code here.
        int n = arr.size();
        int need = n;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == need) {
                need--;
            }
        }

        return need;
    }
};