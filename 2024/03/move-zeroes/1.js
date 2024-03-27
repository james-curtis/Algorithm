// https://leetcode.cn/problems/move-zeroes/description/

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
    let l = 0, r = 0, n = nums.length;
    for (; r < n; r++)
        if (nums[r])
            [nums[l++], nums[r]] = [nums[r], nums[l]];
    return nums;
};

nums = [0, 1, 0, 3, 12]
console.log(moveZeroes(nums));