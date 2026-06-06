class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {

        int n = heights.size();

        // Brute Force - O(n²), O(1)
        //
        // vector<int> ans;
        //
        // for(int i = 0; i < n; i++) {
        //
        //     bool oceanView = true;
        //
        //     for(int j = i + 1; j < n; j++) {
        //         if(heights[j] >= heights[i]) {
        //             oceanView = false;
        //             break;
        //         }
        //     }
        //
        //     if(oceanView) {
        //         ans.push_back(i);
        //     }
        // }
        //
        // return ans;


        // Better Solution - O(n), O(n)
        //
        // stack<int> st;
        //
        // for(int i = 0; i < n; i++) {
        //
        //     while(!st.empty() &&
        //           heights[st.top()] <= heights[i]) {
        //         st.pop();
        //     }
        //
        //     st.push(i);
        // }
        //
        // Extract stack contents in sorted order.


        // Optimal Solution - O(n), O(1) extra space
        // (excluding output)

        vector<int> ans;

        int maxHeight = 0;

        for(int i = n - 1; i >= 0; i--) {

            if(heights[i] > maxHeight) {
                ans.push_back(i);
                maxHeight = heights[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
