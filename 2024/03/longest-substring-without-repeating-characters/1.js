// https://leetcode.cn/problems/longest-substring-without-repeating-characters/description/

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let r = 0;
    let max = 0;
    let map = new Map();
    for (let i = 0; i < s.length; i++) {
        if (i !== 0) {
            map.delete(s[i - 1]);
        }
        while (r < s.length && !map.has(s[r])) {
            map.set(s[r++], null);
        }
        max = Math.max(max, r - i);
    }
    return max;
};

s = "pwwkew"
s = "dvdf"

val = lengthOfLongestSubstring(s);
console.log(val);