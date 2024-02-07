// https://leetcode.cn/problems/valid-triangle-number/description/

/**
 * @param {number[]} nums
 * @return {number}
 */
var triangleNumber = function (nums) {
    let ans = 0;
    for (let i = 0; i < nums.length - 2; i++) {
        for (let j = i + 1; j < nums.length - 1; j++) {
            for (let k = j + 1; k < nums.length; k++) {
                if (nums[i] + nums[j] > nums[k] && nums[k] !== 0) {
                    ans++
                }
            }
        }
    }
    return ans;
};