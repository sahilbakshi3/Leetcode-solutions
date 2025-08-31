class Solution {
public:
    
    bool isValid(vector<vector<char>> &board, int row, int col, char d){
        for(int i = 0; i< 9; i++){
            if(board[i][col] == d) return false;
            if(board[row][i] == d) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == d) return false;
        }
        return true;
    }

    
    
    bool solve(vector<vector<char>> &board){
        for(int i = 0; i< board.size(); i++){
            for(int j = 0; j< board[0].size(); j++){
                if(board[i][j] == '.'){
                    for(char res = '1'; res<='9'; res++){
                        if(isValid(board, i, j, res)){
                            board[i][j] = res;
                            if(solve(board) == true) return true;
                            board[i][j] = '.';
                        }

                    }
                    return false;
                }
            }
            
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};