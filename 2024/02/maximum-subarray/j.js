// https://leetcode.cn/problems/maximum-subarray/description/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    const dp = Array.from({length: nums.length}).fill(0);
    dp[0] = nums[0];
    for (let i = 1; i < nums.length; i++) {
        dp[i] = Math.max(dp[i - 1] + nums[i], nums[i]);
    }
    console.log(dp)
    return dp.toSorted((a, b) => a - b).at(-1);
};