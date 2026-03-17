var minWindow = function(s, t) {
    let map = new Map();

    
    for (let char of t) {
        map.set(char, (map.get(char) || 0) + 1);
    }

    let left = 0;
    let right = 0;
    let count = t.length;

    let minLen = Infinity;
    let result = "";

    while (right < s.length) {

        if (map.has(s[right])) {
            if (map.get(s[right]) > 0) count--;
            map.set(s[right], map.get(s[right]) - 1);
        }

        right++;

        
        while (count === 0) {

            if (right - left < minLen) {
                minLen = right - left;
                result = s.substring(left, right);
            }

            if (map.has(s[left])) {
                map.set(s[left], map.get(s[left]) + 1);
                if (map.get(s[left]) > 0) count++;
            }

            left++;
        }
    }

    return result;
};