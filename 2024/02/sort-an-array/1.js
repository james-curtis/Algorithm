// https://leetcode.cn/problems/sort-an-array/

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArray = function (nums) {

    function bubble() {
        for (; ;) {
            let isModify = false
            for (let i = 0; i < nums.length; i++) {
                if (nums[i + 1] < nums[i]) {
                    [nums[i + 1], nums[i]] = [nums[i], nums[i + 1]];
                    isModify = true;
                }
            }
            if (!isModify) {
                break
            }
        }
        return nums;
    }
    
    function merge() {

    }
};

nums = [5, 1, 1, 2, 0, 0]
console.log(sortArray(nums));