class Solution {
public:
    
    int n, m;

    void bfs(int r, int c, vector<vector<char>> &board){
        board[r][c] = '.';
        queue<pair<int, int>> q;
        q.push({r, c});

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i< 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && board[nrow][ncol] == 'X'){
                    board[nrow][ncol] = '.';
                    q.push({nrow, ncol});
                }

            }

        }

    }

    void dfs(int row, int col, vector<vector<char>>& board){

        if(row < 0 || row >= n || col < 0 || col >= m ||board[row][col] == '.'){
            return ;
        }

        board[row][col] = '.';

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        for(int i = 0; i< 4; i++){
            dfs(row + delrow[i], col + delcol[i], board);
        }

    }

    
    int countBattleships(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();

        int cnt = 0;

        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(board[i][j] == 'X'){
                    cnt++;
                    // bfs(i, j, board);
                    dfs(i, j, board);
                }
            }
        }

        return cnt;
    }
};