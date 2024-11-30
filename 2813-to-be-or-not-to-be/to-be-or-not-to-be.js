var expect = function(val) {
    // toBe checks if the value equals the expected value
    function toBe(expectedVal) {
        if (val === expectedVal) {
            return true;  // Test passes
        } else {
            throw new Error("Not Equal")  // Test fails
        }
    }

    // notToBe checks if the value does not equal the expected value
    function notToBe(expectedVal) {
        if (val !== expectedVal) {
            return true;  // Test passes
        } else {
            throw new Error("Equal") // Test fails
        }
    }

    // Return the two methods to allow chaining
    return { toBe, notToBe };
};
