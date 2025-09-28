/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    
    let orderSet = new Set();

    // return orderSet.size !== nums.length;

    for(let num of nums){
        if(orderSet.has(num)){
            return true;
        }
        orderSet.add(num)
    }
    return false;

};