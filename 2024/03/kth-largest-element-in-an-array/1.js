// https://leetcode.cn/problems/kth-largest-element-in-an-array/description/

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function (nums, k) {
    let ans = null;
    const targetKey = nums.length - k;

    function quick(nums) {
        function helper(l, r) {
            if (l >= r) return;
            // random
            let rand = ~~(Math.random() * (r - l)) + l;
            [nums[l], nums[rand]] = [nums[rand], nums[l]];
            // random end
            let p = l;
            for (let i = l + 1; i <= r; i++) {
                if (nums[i] < nums[l])
                    [nums[i], nums[p]] = [nums[++p], nums[i]];
            }
            [nums[l], nums[p]] = [nums[p], nums[l]];
            if (p < targetKey) {
                helper(p + 1, r);
            } else if (p > targetKey) {
                helper(l, p - 1);
            }
        }

        helper(0, nums.length - 1);
    }

    quick(nums);
    return nums[targetKey];
};

a = [3, 2, 3, 1, 2, 4, 5, 5, 6];
val = findKthLargest(a, 4);
console.log(val);