/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function(s, k) {
    let map = new Map();
    let left =0;
    let right =0;
    let maxFreq = 0;
    let result=0;


    while(right<s.length){

        map.set(s[right],(map.get(s[right])||0)+1);
        maxFreq = Math.max(maxFreq,map.get(s[right]));

        while((right-left+1)-maxFreq >k){
            map.set(s[left],map.get(s[left])-1);
            left++;
        }

       
        result = Math.max(result, right - left + 1);
        right++;




        
    }
    return result;
};