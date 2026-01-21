/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let left =0;
    let size = s.length;
    const sliding = new Set();
    let maxlen = 0;
    for(let right =0;right<size;right++){
       while(sliding.has(s[right])){
        sliding.delete(s[left]);
        left++;
       }

       sliding.add(s[right]);

       maxlen = Math.max(maxlen,right-left+1);
    }

    return maxlen;

    
};