/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let arr = [];
    let product = 1;
    let zeroCount = 0;

    // calculate product of non-zero elements
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) {
            zeroCount++;
        } else {
            product *= nums[i];
        }
    }

    for (let i = 0; i < nums.length; i++) {
        if (zeroCount > 1) {
            arr.push(0);
        } else if (zeroCount === 1) {
            arr.push(nums[i] === 0 ? product : 0);
        } else {
            arr.push(product / nums[i]);
        }
    }

    return arr;
};
