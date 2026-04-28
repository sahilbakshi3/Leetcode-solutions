/**
 * @param {number[][]} grid
 * @param {number} x
 * @return {number}
 */
var minOperations = function(grid, x) {
    const arr = [];

    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            arr.push(grid[i][j]);
        }
    }

    arr.sort((a, b) => a - b);

    const l = arr.length;
    const median = arr[Math.floor(l / 2)];
    let result = 0;

    for (let i = 0; i < l; i++) {
        if (arr[i] % x !== median % x) {
            return -1;
        }

        result += Math.abs(arr[i] - median) / x;
    }

    return result;
};