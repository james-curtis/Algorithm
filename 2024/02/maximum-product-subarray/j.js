// https://leetcode.cn/problems/maximum-product-subarray/description/

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
    let max = -Infinity;
    let pre = 1;
    for (let i = 0; i < nums.length; i++) {
        pre = Math.max(pre * nums[i], nums[i]);
        max = Math.max(pre, max);
    }
    return max;
};

n = [2, 3, -2, 4];
n = [-2, 0, -1];
console.log(maxProduct(n));