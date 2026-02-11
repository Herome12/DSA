/**
 * @param {number[]} nums
 * @return {string}
 */
var largestNumber = function(nums) {
    const arr = nums.map(String);

    arr.sort((a, b) => (b + a).localeCompare(a + b));

    // Edge case: all zeros
    if (arr[0] === "0") return "0";

    return arr.join('');
};
