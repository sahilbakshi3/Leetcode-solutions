/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    
    // let seen = new Set();

    // for(let num of nums){
    //     if(seen.has(num)){
    //         seen.delete(num);
    //     }
    //     else{
    //         seen.add(num);
    //     }
    // }
    // return [...seen][0];

    let res = 0;

    for(let num of nums){
        res = res ^ num;
    }
    return res;
};