class Solution {
public:
    vector<vector<int>> candyCrush(vector<vector<int>>& board) {

        int m = board.size();
        int n = board[0].size();

        // Brute Force
        //
        // Repeatedly:
        // 1. Find all horizontal matches.
        // 2. Find all vertical matches.
        // 3. Store coordinates in a set.
        // 4. Crush them.
        // 5. Apply gravity.
        //
        // Time: O((m*n)^2)
        // Space: O(m*n)


        // Better Solution
        //
        // Use a separate boolean matrix to mark cells
        // to be crushed in each iteration.
        //
        // Time: O((m*n)^2)
        // Space: O(m*n)


        // Optimal Solution
        //
        // Mark crushable candies as negative values.
        // This avoids using extra space.

        bool found = false;

        for(int row = 0; row < m; row++) {
            for(int col = 0; col < n - 2; col++) {

                int val = abs(board[row][col]);

                if(val != 0 &&
                   val == abs(board[row][col + 1]) &&
                   val == abs(board[row][col + 2])) {

                    board[row][col] = -val;
                    board[row][col + 1] = -val;
                    board[row][col + 2] = -val;

                    found = true;
                }
            }
        }

        for(int col = 0; col < n; col++) {
            for(int row = 0; row < m - 2; row++) {

                int val = abs(board[row][col]);

                if(val != 0 &&
                   val == abs(board[row + 1][col]) &&
                   val == abs(board[row + 2][col])) {

                    board[row][col] = -val;
                    board[row + 1][col] = -val;
                    board[row + 2][col] = -val;

                    found = true;
                }
            }
        }

        if(!found) {
            return board;
        }

        for(int col = 0; col < n; col++) {

            int writeRow = m - 1;

            for(int row = m - 1; row >= 0; row--) {

                if(board[row][col] > 0) {
                    board[writeRow][col] = board[row][col];
                    writeRow--;
                }
            }

            while(writeRow >= 0) {
                board[writeRow][col] = 0;
                writeRow--;
            }
        }

        return candyCrush(board);
    }
};
