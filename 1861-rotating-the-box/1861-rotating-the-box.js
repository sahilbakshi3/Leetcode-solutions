/**
 * @param {character[][]} boxGrid
 * @return {character[][]}
 */
var rotateTheBox = function(boxGrid) {
    
    const m = boxGrid.length;
    const n = boxGrid[0].length;

    const res = Array.from({ length: n }, () => Array(m));

    for(let i = 0; i < n; i++) {
        for(let j = 0; j < m; j++) {
            res[i][j] = boxGrid[j][i];
        }
    }

    for(let row of res) {
        row.reverse();
    }

    for(let j = 0; j < m; j++) {

        for(let i = n - 1; i >= 0; i--) {

            if(res[i][j] === '.') {

                let stoneRow = -1;

                for(let k = i - 1; k >= 0; k--) {

                    if(res[k][j] === '*') {
                        break;
                    }
                    else if(res[k][j] === '#') {
                        stoneRow = k;
                        break;
                    }
                }

                if(stoneRow !== -1) {
                    res[i][j] = '#';
                    res[stoneRow][j] = '.';
                }
            }
        }
    }

    return res;
};