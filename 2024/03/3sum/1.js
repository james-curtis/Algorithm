// https://leetcode.cn/problems/3sum/description/

// https://leetcode.cn/problems/3sum/

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    nums.sort((a, b) => a - b);

    const ans = [];

    for (let i = 0; i < nums.length - 2; i++) {
        if (i !== 0 && nums[i] === nums[i - 1]) continue;
        for (let j = i + 1, k = nums.length - 1; j < nums.length - 1; j++) {
            if (j !== i + 1 && nums[j] === nums[j - 1]) continue;

            while (j < k) {
                let cur = nums[i] + nums[j] + nums[k];
                if (cur < 0) {
                    j++;
                }
                if (cur > 0) {
                    k--;
                }

                if (cur === 0) {
                    ans.push([nums[i], nums[j], nums[k]]);
                    break;
                }
            }
        }
    }
    return ans;
};

nums = [-1, 0, 1, 2, -1, -4]
// nums = [-2, 0, 0, 2, 2]
// nums = [-1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4]
console.log(threeSum(nums));