// https://leetcode.cn/problems/subsets/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function (nums) {
    const ans = [];

    const available = [...nums];
    const arr = [];

    function dfs(deep) {
        if (deep === available.length) {
            ans.push([...arr]);
            return;
        }
        arr.push(available[deep]);
        dfs(deep + 1);
        arr.pop();
        dfs(deep + 1);
    }

    dfs(0);

    return ans;
};

nums = [1, 2, 3]
val = subsets(nums);
console.log(val);