// https://leetcode.cn/problems/single-number/solutions/242211/zhi-chu-xian-yi-ci-de-shu-zi-by-leetcode-solution/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let ans = 0;
    for (let i = 0; i < nums.length; i++) {
        ans ^= nums[i];
    }
    return ans;
};

num = [2, 2, 1];
console.log(singleNumber(num));