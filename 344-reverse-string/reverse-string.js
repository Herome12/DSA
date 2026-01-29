/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let size = s.length;

    let arr = [];

    for(let i=size-1;i>=0;i--){
        arr.push(s[i]);
    }

    for(let i=0;i<size;i++){
        s[i] = arr[i];
    }
};