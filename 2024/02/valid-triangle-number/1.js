// https://leetcode.cn/problems/valid-triangle-number/description/

/**
 * @param {number[]} nums
 * @return {number}
 */
var triangleNumber = function (nums) {
    nums.sort();
    let ans = 0;
    let res = [];
    for (let i = 0; i < nums.length - 2; i++) {
        for (let l = i + 1, r = nums.length - 1; l !== r;) {
            if (nums[l] + nums[r] > nums[i]) {
                ans += r - l;
                r--
            } else {
                l++;
            }
        }
    }
    return ans;
};

// nums = [2, 2, 3, 4]
nums = [24, 3, 82, 22, 35, 84, 19]
console.log(triangleNumber(nums));