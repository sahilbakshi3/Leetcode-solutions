class Solution {
  public:
    vector<int> uniqueSorted(vector<int>& arr) {
        // code here
        unordered_set<int> st(arr.begin(), arr.end());
        vector<int> ans(st.begin(), st.end());
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};