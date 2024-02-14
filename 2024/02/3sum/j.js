// https://leetcode.cn/problems/3sum/

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    const list = nums.sort((a, b) => a - b);
    const ans = [];
    for (let i = 0; i < list.length - 2; i++) {
        if (i !== 0 && list[i] === list[i - 1])
            continue;
        for (let j = i + 1, k = list.length - 1; j < list.length - 1; j++) {
            if (j !== i + 1 && list[j] === list[j - 1])
                continue
            for (; j < k && list[i] + list[j] + list[k] > 0; k--) ;
            if (j === k)
                break;
            if (list[i] + list[j] + list[k] === 0) {
                ans.push([list[i], list[j], list[k]]);
            }
        }
    }
    return ans;
};

// nums = [-1, 0, 1, 2, -1, -4]
// nums = [-2, 0, 0, 2, 2]
// nums = [-1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4]
// console.log(threeSum(nums));