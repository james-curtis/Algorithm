function sort(nums) {
    let n = nums.length;
    for (let i = 0; i < n; i++) {
        let flag = false;
        for (let j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                [nums[i], nums[j]] = [nums[j], nums[i]];
                flag = true;
            }
        }
        if (!flag) {
            return nums;
        }
    }
    return nums;
}

a = [1, 3, 2, 4];
res = sort(a);
console.log(res)