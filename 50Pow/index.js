/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function (x, n) {
  let ans = x;

  for (i = 1; i < n; i++) {
    ans *= x;
  }
  if (n >= 0) {
    return ans;
  } else {
    return 1 / (ans * x);
  }
};
console.log(myPow(2, 10));
console.log(myPow(2, -2000));
