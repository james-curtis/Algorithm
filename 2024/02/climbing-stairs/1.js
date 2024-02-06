// https://leetcode.cn/problems/climbing-stairs/description/

/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
    /**
     *
     * @type {number[]}
     */
    const dp = Array.from({length: n + 1}).fill(1);
    for (let i = 2; i < dp.length; i++) {
        dp[i] = dp[i - 1] + dp[i - 2]
    }
    return dp[n]
};