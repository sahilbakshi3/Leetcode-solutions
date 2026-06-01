class Solution {
public:
    vector<vector<int>> findRLEArray(vector<vector<int>>& encoded1, vector<vector<int>>& encoded2) {

        // Brute Force
        //
        // vector<int> arr1, arr2;
        //
        // for(auto &p : encoded1){
        //     for(int i = 0; i < p[1]; i++){
        //         arr1.push_back(p[0]);
        //     }
        // }
        //
        // for(auto &p : encoded2){
        //     for(int i = 0; i < p[1]; i++){
        //         arr2.push_back(p[0]);
        //     }
        // }
        //
        // vector<vector<int>> result;
        //
        // for(int i = 0; i < arr1.size(); i++){
        //     int product = arr1[i] * arr2[i];
        //
        //     if(result.empty() || result.back()[0] != product){
        //         result.push_back({product, 1});
        //     } else {
        //         result.back()[1]++;
        //     }
        // }
        //
        // return result;


        // Better Solution
        //
        // Process frequencies directly without fully expanding
        // but maintain additional temporary structures.
        //
        // Time: O(n + m)
        // Space: O(n + m)


        // Optimal Solution
        // Time: O(n + m)
        // Space: O(1) excluding output

        vector<vector<int>> result;

        int i = 0;
        int j = 0;

        while(i < encoded1.size() && j < encoded2.size()) {

            long long product = 1LL * encoded1[i][0] * encoded2[j][0];

            int freq = min(encoded1[i][1], encoded2[j][1]);

            if(!result.empty() && result.back()[0] == product) {
                result.back()[1] += freq;
            } else {
                result.push_back({(int)product, freq});
            }

            encoded1[i][1] -= freq;
            encoded2[j][1] -= freq;

            if(encoded1[i][1] == 0) i++;
            if(encoded2[j][1] == 0) j++;
        }

        return result;
    }
};
