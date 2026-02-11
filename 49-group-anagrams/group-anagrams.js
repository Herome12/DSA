/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let map = new Map();
    let key
    for(let str of strs){
        const key = str.split('').sort().join();

        if(!map.has(key)){
            map.set(key,[])
        }

        map.get(key).push(str);

    }

    return Array.from(map.values());
};