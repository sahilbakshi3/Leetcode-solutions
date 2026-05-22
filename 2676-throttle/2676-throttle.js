var throttle = function(fn, t) {

    let timer = null;
    let pendingArgs = null;
    const startTimer = () => {

        timer = setTimeout(() => {
            if (pendingArgs) {

                fn(...pendingArgs);
                pendingArgs = null;
                startTimer();
            }
            else {
                timer = null;
            }

        }, t);
    };

    return function(...args) {

        if (!timer) {
            fn(...args);
            startTimer();
        }
        else {
            pendingArgs = args;
        }
    };
};
