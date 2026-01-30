/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
    let map = new Map();
    let result = 0;
    for(num of nums){
        map.set(num,(map.get(num)||0)+1);
    }


    for([value,key] of map){
        if(key>1){
            result = value;
        }
    }
    return result;
};