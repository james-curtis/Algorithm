// https://leetcode.cn/problems/contains-duplicate/?utm_source=LCUS&utm_medium=ip_redirect&utm_campaign=transfer2china

/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    return (new Set(nums)).size !== nums.length;
};