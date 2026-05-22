var createObject = function(keysArr, valuesArr) {

    const result = {};
    for (let i = 0; i < keysArr.length; i++) {

        const key = String(keysArr[i]);
        if (!(key in result)) {
            result[key] = valuesArr[i];
          
        }
    }
    return result;
};
