// https://leetcode.cn/problems/permutations/description/

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function (nums) {
    let ans = [];
    let times = 0;

    function helper(res, available) {
        if (!available.length) {
            times++;
            ans.push(res);
            return;
        }
        for (let i = 0; i < available.length; i++) {
            helper([...res, available[i]], [...available.slice(0, i), ...available.slice(i + 1)]);
        }
    }

    helper([], nums);
    console.log(times);
    return ans;
};

var nums = [1, 2, 3]
console.log(permute(nums));