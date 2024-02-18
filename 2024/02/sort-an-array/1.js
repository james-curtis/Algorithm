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
            sort(left, mid - 1);
            sort(mid + 1, right);
        }

        sort(0, nums.length - 1);
    }


};


nums = [3, 4, 1, 2, 5, 0]
nums = [-2, 3, -5]
nums = [-74, 48, -20, 2, 10, -84, -5, -9, 11, -24, -91, 2, -71, 64, 63, 80, 28, -30, -58, -11, -44, -87, -22, 54, -74, -10, -55, -28, -46, 29, 10, 50, -72, 34, 26, 25, 8, 51, 13, 30, 35, -8, 50, 65, -6, 16, -2, 21, -78, 35, -13, 14, 23, -3, 26, -90, 86, 25, -56, 91, -13, 92, -25, 37, 57, -20, -69, 98, 95, 45, 47, 29, 86, -28, 73, -44, -46, 65, -84, -96, -24, -12, 72, -68, 93, 57, 92, 52, -45, -2, 85, -63, 56, 55, 12, -85, 77, -39]
console.log(sortArray(nums));
