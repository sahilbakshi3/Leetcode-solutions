class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != m * n) return {};
        
        vector<vector<int>> result(m, vector<int>(n));
        
        for(int k = 0; k < original.size(); k++) {
            int i = k / n;
            int j = k % n;
            result[i][j] = original[k];
        }
        
        return result;
    }
};