/**
 * @param {number[]} nums
 * @return {boolean}
 */
var checkPrimeFrequency = function(nums) {
    let mapped = new Map();

    for (let num of nums) {
        mapped.set(num, (mapped.get(num) || 0) + 1);
    }

    for (let [key, count] of mapped) {

        
        if (count <= 1) continue;
        if (count <= 3) return true;

        let isPrime = true;

        for (let i = 2; i * i <= count; i++) {
            if (count % i === 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) return true;
    }

    return false;
};
