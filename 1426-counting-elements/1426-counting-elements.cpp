class Solution {
public:

    int countElements(vector<int>& arr) {

        unordered_set<int> st(arr.begin(), arr.end());

        int count = 0;

        for (int num : arr) {

            if (st.count(num + 1)) {
                count++;
            }
        }

        return count;
    }
};
