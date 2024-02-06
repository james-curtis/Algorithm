// https://leetcode.cn/problems/longest-increasing-subsequence/description/

/**
 *
 * @param {number[]} arr
 * @returns {number}
 */
function sum(arr) {
    return arr.reduce((prev, cursor) => (prev += cursor, prev), 0)
}

/**
 * @param {number[]} nums
 * @return {number}
 */
var lengthOfLIS = function (nums) {
    const dp = Array.from({length: nums.length}).map(e => Array.from({length: nums.length}).fill(0));
    for (let i = 0; i < nums.length; i++) {
        for (let j = i; j < nums.length; j++) {
            if (nums[i] <= nums[j]) {
                dp[i][j]++;
                continue
            }
            dp[i][j] = dp[i][j - 1]
        }
    }

    return Math.max(...dp.flat(2))
};

console.log(lengthOfLIS([10, 9, 2, 5, 3, 7, 101, 18]))