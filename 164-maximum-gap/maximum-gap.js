/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumGap = function(nums) {
    let diff=0;

    if(nums.length<2) return 0;
    nums.sort((a,b)=>a-b);

    for(let i=1;i<nums.length;i++){
        diff = Math.max(diff,nums[i]-nums[i-1]);
    }

    return diff;
};