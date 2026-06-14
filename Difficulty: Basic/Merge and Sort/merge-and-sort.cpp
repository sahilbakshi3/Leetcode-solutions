class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        set<int> st;

        for (int x : arr1)
            st.insert(x);

        for (int x : arr2)
            st.insert(x);

        return vector<int>(st.begin(), st.end());
    }
};