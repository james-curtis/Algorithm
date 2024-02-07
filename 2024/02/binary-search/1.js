// https://leetcode.cn/problems/binary-search/
// 1、查找某个值 target
// 2、查找第一个大于（大于等于） target 的值
// 3、查找第一个小于（小于等于） target 的值

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
    let left = 0, right = nums.length - 1;
    while (right >= left) {
        let mid = ~~((left + right) / 2);
        // if (nums[mid] === target)
        //     return mid;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return [left, right];
};

nums = [-1, 0, 3, 5, 9, 12], target = 9
// nums = [5], target = 5
// nums = [-1, 0, 3, 5, 9, 12], target = 2
console.log(search(nums, target));
