// https://leetcode.cn/problems/binary-search/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
    let left = 0, right = nums.length - 1;
    while (right >= left) {
        let mid = ~~((left + right) / 2);
        if (nums[mid] === target)
            return mid;
        if (nums[mid] < target)
            left = mid + 1;
        if (nums[mid] > target)
            right = mid - 1;
    }
    return -1;
};

// nums = [-1, 0, 3, 5, 9, 12], target = 9
// nums = [5], target = 5
// nums = [-1, 0, 3, 5, 9, 12], target = 2
// console.log(search(nums, target));