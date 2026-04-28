class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> arr;

        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                arr.push_back(grid[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        int l = arr.size();
        int median = arr[l/2];
        int result = 0;

        for(int i = 0; i< l; i++){
            if(arr[i] % x != median % x){
                return -1;
            }

            result += abs(arr[i] - median) / x;

        }

        return result;

    }
};