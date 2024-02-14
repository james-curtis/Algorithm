// https://leetcode.cn/problems/3sum/

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    let map = new Map()
    for (let i = 0; i < nums.length; i++) {
        map.set(nums[i], i);
    }

    let res = new Set()
    for (let i = 0; i < nums.length - 1; i++) {
        for (let j = 1; j < nums.length; j++) {
            const need = 0 - nums[i] - nums[j];
            if (!map.has(need)) {
                continue;
            }
            res.add([need, nums[i], nums[j]].sort().join(','));
        }
    }
    return Array.from(res).map(e => e.split(',').map(Number));
};

nums = [-1,0,1,2,-1,-4]
console.log(threeSum(nums));