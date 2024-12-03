/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let accumulator = init; // Initialize the accumulator with the initial value
    for (let i = 0; i < nums.length; i++) {
        accumulator = fn(accumulator, nums[i]); // Apply the function and update the accumulator
    }
    return accumulator; // Return the final accumulated value
};
