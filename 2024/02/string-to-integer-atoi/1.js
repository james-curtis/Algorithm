// https://leetcode.cn/problems/string-to-integer-atoi/description/

/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function (str) {
    // 读入字符串并丢弃无用的前导空格
    let start = 0
    while (str[start] === ' ') {
        start++;
    }
    // 检查下一个字符（假设还未到字符末尾）为正还是负号，读取该字符（如果有）。 确定最终结果是负数还是正数。 如果两者都不存在，则假定结果为正。
    let positive = true;
    if (str[start] === '-') {
        positive = false;
        start++
    } else if (str[start] === '+') {
        start++
    }

    // 读入下一个字符，直到到达下一个非数字字符或到达输入的结尾。字符串的其余部分将被忽略。
    // 将前面步骤读入的这些数字转换为整数（即，"123" -> 123， "0032" -> 32）。如果没有读入数字，则整数为 0 。必要时更改符号（从步骤 2 开始）。
    let num = 0;
    while (start < str.length && 0 <= str[start] && str[start] <= 9) {
        let n = str[start] - 0;
        num = num * 10 + n;
        start++;
    }

    // 如果整数数超过 32 位有符号整数范围 [−2^31,  2^31 − 1] ，需要截断这个整数，使其保持在这个范围内。具体来说，小于 −231 的整数应该被固定为 −231 ，大于 231 − 1 的整数应该被固定为 231 − 1 。
    const lower = (-2) ** 31;
    const upper = 2 ** 31 - 1;
    let res = positive ? num : 0 - num;
    if (res > upper) {
        return upper
    }
    if (res < lower) {
        return lower;
    }
    // 返回整数作为最终结果。
    return positive ? num : 0 - num;
};

// console.log(myAtoi('2147483649'))