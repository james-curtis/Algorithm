// https://leetcode.cn/problems/check-if-one-string-swap-can-make-strings-equal/solutions/1881111/jin-zhi-xing-yi-ci-zi-fu-chuan-jiao-huan-j8si/
// https://www.nowcoder.com/discuss/353159298136088576?sourceSSR=search

/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var areAlmostEqual = function (s1, s2) {
    if (s1 === s2) {
        return true;
    }
    let p1 = -1, p2 = -1;
    let diff = 0;
    for (let i = 0; i < s1.length; i++) {
        if (s1[i] !== s2[i]) {
            diff++;
            if (p1 < 0) {
                p1 = i;
            } else if (p2 < 0) {
                p2 = i;
            }
        }
        if (diff > 2) {
            return false;
        }
    }
    if (diff === 1) {
        return false;
    }
    return p1 > -1 && p2 > -1 && s1[p1] === s2[p2] && s1[p2] === s2[p1];
};


console.log(areAlmostEqual("bank", "kanb"))