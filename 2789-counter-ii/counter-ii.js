/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init; // Maintain the current state of the counter

    const increment = () => {
        current += 1;
        return current;
    };

    const decrement = () => {
        current -= 1;
        return current;
    };

    const reset = () => {
        current = init;
        return current;
    };

    return { increment, decrement, reset };
};

/**
 * const counter = createCounter(5)
 * console.log(counter.increment()); // 6
 * console.log(counter.reset()); // 5
 * console.log(counter.decrement()); // 4
 */
