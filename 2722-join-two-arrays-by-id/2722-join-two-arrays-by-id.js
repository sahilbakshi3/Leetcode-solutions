/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    let items = [...arr1, ...arr2];

    let res = {};

    for(let obj of items){
        if(!res[obj.id]){
            res[obj.id] = obj;
            continue;
        }
        res[obj.id] = {...res[obj.id], ...obj};
    }
    return Object.values(res);
};