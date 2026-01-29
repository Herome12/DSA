/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let result = nums[0];

    let sum=0;

    if(nums.length == 1) return nums[0];
    for(let i=0;i<nums.length;i++){
        sum+=nums[i];
        result = Math.max(result,sum);
        if(sum<0)  sum=0;

        
    }
    return result;
};