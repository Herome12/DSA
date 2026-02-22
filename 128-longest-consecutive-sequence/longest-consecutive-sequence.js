var longestConsecutive = function(nums) {
    let set = new Set(nums);   // Add everything first

    let longest = 0;

    for (let num of set) {     // Iterate over set (avoid duplicates)

        // Start only if it is the beginning of a sequence
        if (!set.has(num - 1)) {
            let currentNum = num;
            let count = 1;

            while (set.has(currentNum + 1)) {
                currentNum++;
                count++;
            }

            longest = Math.max(longest, count);
        }
    }

    return longest;
};