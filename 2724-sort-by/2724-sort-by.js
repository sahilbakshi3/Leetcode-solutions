/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    // return arr.sort((a, b) => fn(a) - fn(b));

    return arr
            .map(item => ({val:fn(item), obj:item}))
            .sort((a, b) => a.val - b.val)
            .map(item => item.obj);

};