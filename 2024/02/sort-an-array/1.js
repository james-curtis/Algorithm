// https://leetcode.cn/problems/sort-an-array/

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArray = function (nums) {
    myQuick();
    return nums;

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

    function myQuick() {
        function sort(left, right) {
            if (left >= right) return;
            let mid = left;
            for (let i = left + 1; i <= right; i++)
                if (nums[i] < nums[left])
                    [nums[i], nums[mid]] = [nums[++mid], nums[i]];
            [nums[left], nums[mid]] = [nums[mid], nums[left]];
            sort(0, mid - 1);
            sort(mid + 1, right);
        }

        sort(0, nums.length - 1);
    }


};


nums = [3, 4, 1, 2, 5, 0]
nums = [-2, 3, -5]
console.log(sortArray(nums));

















