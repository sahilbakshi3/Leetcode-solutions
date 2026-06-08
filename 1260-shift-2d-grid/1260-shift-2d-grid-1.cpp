class Solution {
public:
    
    void reverse(vector<vector<int>> &grid, int n, int k, int start, int end){
        int low = start;
        int high = end-1;

        while(low < high){
            swap(grid[high/n][high%n], grid[low/n][low%n]);
            low++;
            high--;
        }
    }
    
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();

        int size = m*n;

        k = k%size;

        reverse(grid, n, k, 0, size-k);
        reverse(grid, n, k, size-k, size);
        reverse(grid, n, k, 0, size);

        return grid;

    }
};
