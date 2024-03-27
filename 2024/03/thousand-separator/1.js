// https://leetcode.cn/problems/thousand-separator/

/**
 * @param {number} n
 * @return {string}
 */
var thousandSeparator = function (n) {
    return String(n).replace(/(?<!^)(?=(\d{3})+$)/g, '.')
};

n = 12341234
console.log(thousandSeparator(n));