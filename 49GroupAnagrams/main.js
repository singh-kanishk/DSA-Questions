/**
 * @param {string[]} strs
 * @return {string[][]}
 */
let mp = new Map();

function sortSubarray(arr, start, end) {
  const sorted = arr.slice(start, end + 1).sort((a, b) => a - b);

  arr.splice(start, sorted.length, ...sorted);

  return arr;
}
function makeArray(string) {
  let isCompared = false;

  mp.set(string, [value, str.length]);

  for (s in string) {
    value += s.charCodeAt() - 96;
    mp[string][mp[string].length] = s.charCodeAt() - 96;
  }

  sortSubarray(mp[str], 2, str.length - 1);
}
function isSimiliar(str1, str2) {
  let ans;
  if (str1[0] !== str2[0] || str1[1] !== str2[1]) {
    mp.set(JSON.stringify([str1, str2], false));
    return false;
  }
  for (i = 2; i < str1.length - 1; i++) {
    if (str1[i] != str2[i]) {
      mp.set(JSON.stringify([str1, str2], false));
      return false;
    }
  }
  mp.set(JSON.stringify([str1, str2], true));
  return true;
}
var groupAnagrams = function (strs) {
  for (let str in strs) {
    makeArray(str);
  }
};
console.log(groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]));
