/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
    let negarr =[];
    let posarr =[];

    let result =[];

    for(let num of nums){
        if (num<0){
            negarr.push(num);
        }
    }

    for(let num of nums){
        if(num>0){
            posarr.push(num);
        }
    }

    for(let i=0;i<posarr.length;i++){
        result.push(posarr[i]);
        result.push(negarr[i]);
    }

    return result;
};