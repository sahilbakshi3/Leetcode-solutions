/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise((resolve, reject) => {
        const results = [];
        let cnt = 0;

        functions.forEach((fn, idx) => {
            fn().then(res => {
                cnt++;
                results[idx] = res;

                if(cnt === functions.length){
                    resolve(results);
                }
            })
            .catch(error => {
                reject(error);
            })
        })
    })
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */