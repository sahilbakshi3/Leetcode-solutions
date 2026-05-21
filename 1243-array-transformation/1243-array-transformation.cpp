class Solution {
public:

    vector<int> transformArray(vector<int>& arr) {

        int n = arr.size();
        while (true) {
          
            vector<int> next = arr;
            bool changed = false;

            for (int i = 1; i < n - 1; i++) {

                if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {

                    next[i]++;
                    changed = true;
                }

                else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {

                    next[i]--;
                    changed = true;
                }
            }

            if (!changed) {
                break;
            }

            arr = next;
        }

        return arr;
    }
};
