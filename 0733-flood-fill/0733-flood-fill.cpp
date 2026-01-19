class Solution {
public:
    
    // void bfs(int row, int col, vector<vector<int>>& image, vector<vector<int>>& ans, int newColor, int iniColor){

    //     int n = image.size();
    //     int m = image[0].size();

    //     ans[row][col] = newColor;
    //     queue<pair<int, int>> q;
    //     q.push({row, col});
    //     int drow[] = {-1, 0, 1, 0};
    //     int dcol[] = {0, -1, 0, 1};

    //     while(!q.empty()){
    //         int r = q.front().first;
    //         int c = q.front().second;
    //         q.pop();

    //         for(int i = 0; i< 4; i++){
    //             int nrow = r + drow[i];
    //             int ncol = c + dcol[i];

    //             if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && ans[nrow][ncol] != newColor && image[nrow][ncol] == iniColor){
    //                 q.push({nrow, ncol});
    //                 ans[nrow][ncol] = newColor;
    //             }

    //         }

    //     }

    // }

    void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>>& image, int newcolor, int inicolor){
        ans[row][col] = newcolor;
        int n = image.size();
        int m = image[0].size();

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, -1, 0, 1};
        
        
        for(int i = 0; i< 4; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor){
                dfs(nrow, ncol, ans, image, newcolor, inicolor);
            }
            
        }
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        int iniColor = image[sr][sc];

        vector<vector<int>> ans = image;

        // bfs(sr, sc, image, ans, color, iniColor);
        dfs(sr, sc, ans, image, color, iniColor);
        return ans;
    }
};