// https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let min = prices[0];
    let res = 0;
    for (let i = 1; i < prices.length; i++) {
        res = Math.max(prices[i] - min, res);
        min = Math.min(min, prices[i]);
    }
    return res;
};