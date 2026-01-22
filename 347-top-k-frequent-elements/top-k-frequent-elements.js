/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
function topKFrequent(nums, k) {
    // 1. Count frequencies
    const freqMap = new Map();
    for (let num of nums) {
        freqMap.set(num, (freqMap.get(num) || 0) + 1);
    }

    // 2. Sort entries by frequency descending and take top k
    return [...freqMap.entries()]
        .sort((a, b) => b[1] - a[1])  // sort by frequency
        .slice(0, k)                  // take top k
        .map(entry => entry[0]);      // extract numbers
}