// https://leetcode.cn/problems/trapping-rain-water/solutions/692342/jie-yu-shui-by-leetcode-solution-tuvc/?envType=study-plan-v2&envId=top-100-liked/

/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {

    /**
     * @type {number[]}
     */
    const leftMax = Array.from({length: height.length}).fill(0);
    const rightMax = [...leftMax];

    leftMax[0] = height[0];
    for (let i = 1; i < height.length; i++) {
        leftMax[i] = Math.max(leftMax[i - 1], height[i]);
    }

    rightMax[height.length - 1] = height.at(-1);
    for (let i = height.length - 1 - 1; i >=0; i--) {
        rightMax[i] = Math.max(rightMax[i + 1], height[i]);
    }

    let ans = 0;
    for (let i = 0; i < height.length; i++) {
        ans += Math.min(leftMax[i], rightMax[i]) - height[i];
    }

    return ans;
};

h = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
console.log(trap(h));