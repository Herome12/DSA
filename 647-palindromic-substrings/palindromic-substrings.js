var countSubstrings = function(s) {
    let count = 0;
    let left = 0;
    let right = 0;

    while (left < s.length) {
        right = left;

        while (right < s.length) {
            let l = left;
            let r = right;
            let isPalindrome = true;

            while (l < r) {
                if (s[l] !== s[r]) {
                    isPalindrome = false;
                    break;
                }
                l++;
                r--;
            }

            if (isPalindrome) count++;

            right++;
        }

        left++;
    }

    return count;
};