var characterReplacement = function(s, k) {

    if (!s || s.length === 0) return 0;

    let left = 0;
    let right = 0;
    let count = 0;

    let freq = new Map();
    let maxFreq = 0;

    while (right < s.length) {

        // increase frequency of right character
        freq.set(s[right], (freq.get(s[right]) || 0) + 1);

        // update max frequency in window
        maxFreq = Math.max(maxFreq, freq.get(s[right]));

        // if window invalid → shrink
        if ((right - left + 1) - maxFreq > k) {
            freq.set(s[left], freq.get(s[left]) - 1);
            left++;
        }

        count = Math.max(count, right - left + 1);

        right++;
    }

    return count;
};