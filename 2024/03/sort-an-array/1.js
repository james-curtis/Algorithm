// https://leetcode.cn/problems/sort-an-array/description/

function sortArray(nums) {
    function quicksort(l, r) {
        if (l>=r) return;
        let p = l;
        for (let i = l + 1; i <= r; i++) {
            if (nums[i] < nums[l]) {
                [nums[p], nums[i]] = [nums[i], nums[++p]];
            }
        }
        [nums[p], nums[l]] = [nums[l], nums[p]];
        quicksort(l, p - 1);
        quicksort(p + 1, r);
    }

    quicksort(0, nums.length - 1);
    return nums
}

a = [1, 3, 2];
console.log(sortArray(a));