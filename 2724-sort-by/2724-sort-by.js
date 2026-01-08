/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    // return arr.sort((a, b) => fn(a) - fn(b));

    // return arr
    //         .map(item => ({val:fn(item), obj:item}))
    //         .sort((a, b) => a.val - b.val)
    //         .map(item => item.obj);

    const mapped = arr.map(item => [fn(item), item]);

    const mergeSort = (array) => {
        if (array.length <= 1) return array;

        const mid = Math.floor(array.length / 2);
        const left = mergeSort(array.slice(0, mid));
        const right = mergeSort(array.slice(mid));

        return merge(left, right);
    };

    const merge = (left, right) => {
        let i = 0, j = 0;
        const result = [];

        while (i < left.length && j < right.length) {
        if (left[i][0] < right[j][0]) {
            result.push(left[i++]);
        } else {
            result.push(right[j++]);
        }
        }

        return result.concat(left.slice(i), right.slice(j));
    };

    return mergeSort(mapped).map(pair => pair[1]);

};