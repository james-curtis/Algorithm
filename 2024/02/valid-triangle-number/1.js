// https://leetcode.cn/problems/valid-triangle-number/description/

/**
 * @param {number[]} nums
 * @return {number}
 */
var triangleNumber = function (nums) {
    let ans = 0;
    let res = [];
    for (let i = 0; i < nums.length - 2; i++) {
        for (let j = i + 1; j < nums.length - 1; j++) {
            for (let k = j + 1; k < nums.length; k++) {
                if (nums[k] !== 0
                    && nums[i] + nums[j] > nums[k]
                    && nums[k] + nums[i] > nums[j]
                    && nums[j] + nums[k] > nums[i]) {
                    ans++
                    // res.push([nums[i], nums[j], nums[k]]);
                }
            }
        }
    }
    console.log(res);
    return ans;
};

var nums = [2, 2, 3, 4]
nums = [24, 3, 82, 22, 35, 84, 19]
console.log(triangleNumber(nums));