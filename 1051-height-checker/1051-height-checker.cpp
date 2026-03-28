class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();

        int cnt = 0;

        vector<int> expectedHeights = heights;

        sort(expectedHeights.begin(), expectedHeights.end());

        for(int i = 0; i< n; i++){
            if(heights[i] != expectedHeights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};