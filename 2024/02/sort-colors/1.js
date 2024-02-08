// https://leetcode.cn/problems/sort-colors/description/

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function (nums) {
    let p1 = 0;
    let p2 = nums.length - 1;

    for (let i = p1; i <= p2;) {
        if (nums[i] === 0) {
            [nums[p1], nums[i]] = [nums[i], nums[p1]];
            p1++;
            i++;
            continue;
        }
        if (nums[i] === 2) {
            [nums[p2], nums[i]] = [nums[i], nums[p2]];
            p2--;
            continue;
        }
        i++
    }
};

n = [2, 0, 2, 1, 1, 0];
sortColors(n)
console.log(n);
