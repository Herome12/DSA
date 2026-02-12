/**
 * @param {string} s
 * @return {number}
 */
var longestBalanced = function (s) {
    const n = s.length;
    let ans = 1;

    for (let i = 0; i < n; i++) {
        const freq = new Map();
        let maxFreq = 0;

        for (let j = i; j < n; j++) {
            const ch = s[j];
            freq.set(ch, (freq.get(ch) || 0) + 1);

            maxFreq = Math.max(maxFreq, freq.get(ch));
            const len = j - i + 1;

            if (freq.size * maxFreq === len) {
                ans = Math.max(ans, len);
            }
        }
    }

    return ans;
};
