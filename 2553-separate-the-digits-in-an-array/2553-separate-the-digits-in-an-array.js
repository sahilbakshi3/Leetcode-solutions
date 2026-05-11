/**
 * @param {number[]} nums
 * @return {number[]}
 */
var separateDigits = function(nums) {
    let ans = [];
    
    for(let it of nums){
        let temp = [];

        while(it > 0){
            temp.push(it % 10);
            it = Math.floor(it / 10);
        }

        temp.reverse();

        for(let i of temp){
            ans.push(i);
        }

    }

    return ans;

};