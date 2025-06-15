/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  if (s.length == 0) return true;
  if (s.length % 2 != 0) return false;
  let stack = []; //@string
  let mp = new Map();
  let atLeastOneOpenedBracket=false;
  mp.set("}", "{");
  mp.set(")", "(");
  mp.set("]", "[");

  for (let i = 0; i < s.length; i++) {
    if (mp.has(s.at(i))) {
      if (stack.at(-1) == mp.get(s.at(i))) {
        stack.pop();
        atLeastOneOpenedBracket=true;
      } else {
        return false;
      }
    } else {
      stack.push(s.at(i));
    }
  }
  if(!atLeastOneOpenedBracket||stack.length!=0)return false;
  return true;
};