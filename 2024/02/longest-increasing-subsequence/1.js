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
    /**
     * @type {number[]}
     */
    const dp = Array.from({length: nums.length}).fill(1);
    for (let i = 1; i < nums.length; i++) {
        for (let j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                dp[i] = Math.max(dp[j] + 1, dp[i])
            }
        }
    }

    return Math.max(...dp)
};

console.log(lengthOfLIS([10, 9, 2, 5, 3, 7, 101, 18]))