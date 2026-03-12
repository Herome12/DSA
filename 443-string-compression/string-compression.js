/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(chars) {

    let a = [];
    let count = 1;

    for(let i = 0; i < chars.length; i++){

        if(chars[i] === chars[i+1]){
            count++;
        } 
        else{
            a.push(chars[i]);

            if(count > 1){
                let str = count.toString();
                for(let c of str){
                    a.push(c);
                }
            }

            count = 1;
        }
    }

    // copy result back into original array
    for(let i = 0; i < a.length; i++){
        chars[i] = a[i];
    }

    return a.length;
};