/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, level) {
    const res = [];

    arr.forEach((element) => {
        if(Array.isArray(element) && level > 0){
            res.push(...flat(element, level-1));
        }
        else{
            res.push(element);
        }
    })
    return res;
};