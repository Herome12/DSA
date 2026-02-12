/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minRemoval = function(nums, k) {
    const arr = nums.sort((a,b)=>a-b);

    let min = 0
    let max = 1;
    let size = nums.length;
    let maxSize = 0;
    if(nums.length===1) return 0;

    while(max<size){
        if(arr[max]<=k*arr[min]){
            maxSize = Math.max(maxSize,(max-min)+1);
            max++


        }
        else{
            min++
        }

    }
    return size - maxSize;

};