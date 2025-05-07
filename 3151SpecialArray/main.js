/**
 * @param {number[]} nums
 * @return {boolean}
 */
function checkParity(x) {
    if (x % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
var isArraySpecial = function (nums) {
    let boolForParity = checkParity(nums[0]);
    for (let i = 1; i < nums.length; i++) {
        if (checkParity(nums[i]) === boolForParity) {
            return false;
        }
        boolForParity = checkParity(nums[i]);
    }
    return true;
};
console.log(isArraySpecial([4, 3, 1, 6]))