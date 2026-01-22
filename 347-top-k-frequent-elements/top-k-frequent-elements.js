function topKFrequent(nums, k) {
    // 1. Count frequencies
    const freqMap = new Map();
    for (let num of nums) {
        freqMap.set(num, (freqMap.get(num) || 0) + 1);
    }

    // 2. Use a "heap" (array + sort) to keep top k
    const heap = [];
    for (let [num, freq] of freqMap.entries()) {
        heap.push([freq, num]);
        // Sort ascending by frequency
        heap.sort((a, b) => a[0] - b[0]);
        if (heap.length > k) heap.shift(); // remove smallest freq
    }

    // 3. Extract numbers
    return heap.map(pair => pair[1]);
}

// Example
console.log(topKFrequent([1,1,1,2,2,3], 2)); // [1,2]
