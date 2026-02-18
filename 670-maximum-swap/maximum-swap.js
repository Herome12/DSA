/**
 * @param {number} num
 * @return {number}
 */
var maximumSwap = function(num) {

    let uarr = String(num).split('').map(Number);
    let size = uarr.length;
    let arr=[...uarr];
    let sortedArr = uarr.sort((a,b)=> b-a);
    console.log(arr);
    console.log(sortedArr)
      let right =0; 
      let left = 0;
    for(let  i=0;i<size;i++){
        console.log(arr[i]);
        console.log(sortedArr[i]);
        if(arr[i]!==sortedArr[i]){
            
              right =i+1; 
               left = i;
            break;
        }
    }

 
console.log(right," ",left);
let maxE=0;
let maxI=right;
   while(right<size){
    
     if(arr[right]>=maxE){
        maxE=arr[right];
        maxI=right;
     }
     right++;

   }
    let temp = arr[left];
     arr[left] = arr[maxI];
     arr[maxI] = temp;

   result =  Number(arr.join(''));


    return result;
};