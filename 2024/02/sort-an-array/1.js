// https://leetcode.cn/problems/sort-an-array/

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArray = function (nums) {
    quick();

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

    function quick() {
        function sort(left, right) {
            if (left >= right) return;
            let lt = left, pVal = nums[left];
            for (let i = left + 1; i <= right; i++) {
                if (nums[i] < pVal) {
                    lt++;
                    [nums[lt], nums[i]] = [nums[i], nums[lt]];
                }
            }
            [nums[left], nums[lt]] = [nums[lt], nums[left]];
            sort(left, lt - 1);
            sort(lt + 1, right);
        }

        sort(0, nums.length - 1);
    }


};


nums = [3, 4, 1, 2, 5, 0]
console.log(sortArray(nums));
console.log(nums)