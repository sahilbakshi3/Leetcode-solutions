/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    var chunkedArray = [];

    var idx = 0;

    while(idx < arr.length){
        chunkedArray.push(arr.slice(idx, idx+size));

        idx += size;

    }
    return chunkedArray;
};
