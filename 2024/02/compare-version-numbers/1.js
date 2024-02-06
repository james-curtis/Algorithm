// https://leetcode.cn/problems/compare-version-numbers/description/

/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function (version1, version2) {
    // 按位数拆分版本号
    const v1 = version1.split('.').map(Number)
    const v2 = version2.split('.').map(Number)
    // 对齐版本号
    if (v1.length < v2.length) {
        Array.from({length: v2.length - v1.length}).map(e => v1.push(0))
    }
    if (v2.length < v1.length) {
        Array.from({length: v1.length - v2.length}).map(e => v2.push(0))
    }
    // 比较各位版本号
    for (let i = 0; i < v1.length; i++) {
        if (v1[i] > v2[i]) {
            return 1
        }
        if (v1[i] < v2[i]) {
            return -1
        }
    }
    return 0
};