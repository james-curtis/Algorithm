// https://leetcode.cn/problems/longest-consecutive-sequence/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
    const s = new Set(nums);
    let res = 0;
    for (const i of s) {
        if (s.has(i - 1)) continue;
        let curRes = 0;
        for (let j = i; s.has(j); j++) {
            curRes++;
        }
        res = Math.max(res, curRes);
    }
    return res;
};

// console.log(longestConsecutive([100, 4, 200, 1, 3, 2]))