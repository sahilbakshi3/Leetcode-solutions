/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
    const stack = [arr[Symbol.iterator]()];

    while(stack.length){
        const top = stack[stack.length - 1];
        const {value, done} = top.next();

        if(done){
            stack.pop();
            continue;
        }

        if(Array.isArray(value)){
            stack.push(value[Symbol.iterator]());
        }
        else{
            yield value;
        }
    }
};

/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */