var lengthOfLongestSubstring = function(s) {
    let left = 0;
    let right = s.length;
    let sliding = new Set();
    let up = 0;        // start from 0
    let maxLen = 0;

    while (up < right) {

        while (sliding.has(s[up])) {
            sliding.delete(s[left]);
            left++;
        }

        sliding.add(s[up]);
        up++;

        maxLen = Math.max(maxLen, up - left);
    }

    return maxLen;
};
