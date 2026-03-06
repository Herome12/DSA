/**
 * @param {string} word
 * @return {number}
 */
var removeAlmostEqualCharacters = function(word) {
    let left =1;
    let right = 0;
    let size = word.length;
    let count=0;
    console.log(word);

    while(left<size){
         let diff = Math.abs(
            word[left].charCodeAt(0) - word[right].charCodeAt(0)
        );

        if(diff<=1){
            count++;
            left +=2;
            right+=2;
        }
        else{
            
            left++;
            right++;
        }

        

       
       
    }
    return count;
};