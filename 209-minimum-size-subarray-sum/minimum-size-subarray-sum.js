/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    
    let left = 0;          // fix 1: declare left
    let result = Infinity; // fix 2: initialize properly
    let sum = 0;

    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];

        while (sum >= target) {
            result = Math.min(result, i - left + 1);
            sum -= nums[left];
            left++;
        }
    }

    
    return result === Infinity ? 0 : result;
};
