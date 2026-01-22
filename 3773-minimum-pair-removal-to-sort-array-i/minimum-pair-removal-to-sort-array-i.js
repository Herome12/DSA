/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumPairRemoval = function(nums) {
    // helper function to check if array is non-decreasing
    const isSorted = (arr) => {
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] < arr[i - 1]) return false;
        }
        return true;
    };

    let operations = 0;

    // repeat until array becomes non-decreasing
    while (!isSorted(nums)) {
        let minSum = nums[0] + nums[1];
        let idx = 0;

        // find leftmost adjacent pair with minimum sum
        for (let i = 1; i < nums.length - 1; i++) {
            let sum = nums[i] + nums[i + 1];
            if (sum < minSum) {
                minSum = sum;
                idx = i;
            }
        }

        // merge the pair
        nums[idx] = nums[idx] + nums[idx + 1];
        nums.splice(idx + 1, 1);

        operations++;
    }

    return operations;
};
