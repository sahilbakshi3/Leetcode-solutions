class Solution {
    public char[][] rotateTheBox(char[][] boxGrid) {
        int m = boxGrid.length;
        int n = boxGrid[0].length;

        char[][] res = new char[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                res[i][j] = boxGrid[j][i];
            }
        }

        for(int i = 0; i < n; i++) {

            int left = 0;
            int right = m - 1;

            while(left < right) {
                char temp = res[i][left];
                res[i][left] = res[i][right];
                res[i][right] = temp;

                left++;
                right--;
            }
        }

        for(int j = 0; j < m; j++) {

            for(int i = n - 1; i >= 0; i--) {

                if(res[i][j] == '.') {

                    int stoneRow = -1;

                    for(int k = i - 1; k >= 0; k--) {

                        if(res[k][j] == '*') {
                            break;
                        }
                        else if(res[k][j] == '#') {
                            stoneRow = k;
                            break;
                        }
                    }

                    if(stoneRow != -1) {
                        res[i][j] = '#';
                        res[stoneRow][j] = '.';
                    }
                }
            }
        }

        return res;
    }
}