var lengthOfLongestSubstring = function(s) {
    let left = 0;
    let right = 0;
    let maxLen = 0;
    let set = new Set();

    while (right < s.length) {
        
        while (set.has(s[right])) {
            set.delete(s[left]);
            left++;
        }

        set.add(s[right]);

        maxLen = Math.max(maxLen, right - left + 1);

        right++;
    }

    return maxLen;
};