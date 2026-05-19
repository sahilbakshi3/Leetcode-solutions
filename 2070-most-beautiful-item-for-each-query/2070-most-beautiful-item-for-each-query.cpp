class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();

        sort(items.begin(), items.end());

        vector<int> maxBeauty(n);
        maxBeauty[0] = items[0][1];

        for(int i = 1; i < n; i++){
            maxBeauty[i] = max(maxBeauty[i-1], items[i][1]);
        }

        vector<int> ans;

        for(int q: queries) {
            int left = 0;
            int right = n - 1;

            int idx = -1;

            while( left <= right){
                int mid = left + (right - left)/2;

                if(items[mid][0] <= q){
                    idx = mid;
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }

            if(idx == -1){
                ans.push_back(0);
            }
            else{
                ans.push_back(maxBeauty[idx]);
            }
        }

        return ans;

    }
};