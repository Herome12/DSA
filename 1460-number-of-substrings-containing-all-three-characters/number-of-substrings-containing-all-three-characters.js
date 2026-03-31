/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function(s) {

    let map = {a:0,b:0,c:0};

    let left =0;
    let right =0;
    let count =0;

    while(right<s.length){
        map[s[right]]++;

        while(map['a']>0&&map['b']>0 && map['c']>0){
              count += s.length - right;
              map[s[left]]--;
              left++;

        }

        right++;
    }

    return count;
};