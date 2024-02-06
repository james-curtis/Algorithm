// https://leetcode.cn/problems/house-robber/

/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function (nums) {
    /**
     * @type {number[]}
     */
    const dp = Array.from({length: nums.length + 1}).fill(0);

    for (let i = 1; i <= nums.length; i++)
        for (let j = 0; j <= i - 1; j++) {
            if (j !== 0 && i - j === 1)
                continue;
            dp[i] = Math.max(dp[i], dp[j] + nums[i - 1]);
        }
    return Math.max(...dp);
};

// 这个方法有问题，把每种方法都试了一遍，极端数据ac不了的