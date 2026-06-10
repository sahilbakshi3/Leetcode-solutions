class Solution {
public:
    
    bool solve(vector<vector<char>>& board, string &word, int row, int col, int idx){
        if(idx == word.size()){
            return true;
        }

        int m = board.size();
        int n = board[0].size();

        if(row < 0 || col < 0 || row >= m || col >= n || board[row][col] != word[idx]){
            return false;
        }

        char temp = board[row][col];
        board[row][col] = '#';

        bool found = solve(board, word, row + 1, col, idx + 1) ||
                    solve(board, word, row, col + 1, idx + 1) ||
                    solve(board, word, row - 1, col, idx + 1) ||
                    solve(board, word, row, col - 1, idx + 1);
        
        board[row][col] = temp;

        return found;

    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i< m; i++){
            for(int j = 0; j< n; j++){
                if(solve(board, word, i, j, 0)){
                    return true;
                }
            }
        }

        return false;
    }
};