/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function(nums) {
    let left =0;
    let right =0;
    let zeroCount =0;
    let maxLen = 0;


    let size = nums.length;

    while(right<size){

       if(nums[right]===0){
         zeroCount++;

       }
        
        while(zeroCount>1){
            if(nums[left]===0){
               
                zeroCount--;
            }
             left++;
        }

        maxLen = Math.max(maxLen,right-left);
        right++;


        



    }
    return maxLen;
};