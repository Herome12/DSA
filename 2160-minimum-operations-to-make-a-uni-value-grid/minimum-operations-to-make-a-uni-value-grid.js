/**
 * @param {number[][]} grid
 * @param {number} x
 * @return {number}
 */
var minOperations = function(grid, x) {
    let operations =0;
    let arr = [];
    for(let row of grid){
        for(let num of row){
            arr.push(num);
        }

    }

    let remainder = arr[0]%x;

    for(let num of arr){
        if(num%x !==remainder){
            return -1;
        }
    }

    
    arr.sort((a, b) => a - b);

    
    let median = arr[Math.floor(arr.length / 2)];

    
    
    for (let num of arr) {
        operations += Math.abs(num - median) / x;
    }

    return operations;




    
};