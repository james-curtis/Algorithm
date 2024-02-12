// https://leetcode.cn/problems/add-strings/description/

/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function (num1, num2) {
    let maxlen = num1.length > num2.length ? num1.length : num2.length;
    num1 = num1.padStart(maxlen, `0`);
    num2 = num2.padStart(maxlen, `0`);
    let res = '';
    let carry = 0;
    for (let i = maxlen - 1; i >= 0; i--) {
        let temp = +num1[i] + +num2[i] + carry;
        res = `${temp % 10}` + res;
        carry = ~~(temp / 10);
    }
    if (carry) {
        res = `${carry}` + res;
    }
    return res;
};
