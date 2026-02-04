class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        
        for(int i = 0; i< n; i++){
            for(int j = 0; j< n; j++){
                if(grid[i][j] == 1){
                    q.push({{i, j}, 0});
                }
            }
        }

        if(q.empty() || q.size() == n*m) return -1;

        int ans = 0;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;
            q.pop();

            ans = max(ans, dist);

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0){
                    grid[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, dist + 1});
                }
            }

        }
        return ans;
    }
};