/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {
    
    let result =0;
    let average =0;
    let sum =0;
    for(let i=0;i<k;i++){
         sum += nums[i];

    }
    average = sum/k;
    result = average;


    for(let i=k;i<nums.length;i++){
        sum = sum- nums[i-k] + nums[i];
        average = sum/k;
        result = Math.max(average,result);
    }
    return result;
    
};