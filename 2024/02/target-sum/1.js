// https://leetcode.cn/problems/target-sum/solutions/816361/mu-biao-he-by-leetcode-solution-o0cp/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var findTargetSumWays = function (nums, target) {
    let ways = 0;

    function helper(idx, sum) {
        if (idx === nums.length) {
            if (sum === target)
                ways++;
            return;
        }
        helper(idx + 1, sum + (-nums[idx]));
        helper(idx + 1, sum + nums[idx]);
    }

    helper(0, 0);
    return ways;
};

// var res = findTargetSumWays([1, 1, 1, 1, 1], 3);
// console.log(res)