// https://leetcode.cn/problems/count-primes/description/

/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function (n) {
    let arr = Array.from({length: n}).fill(1);
    let cnt = 0;
    for (let i = 2; i ** 2 < n; i++) {
        if (arr[i] === 0) continue;
        for (let j = i ** 2; j < n; j += i) {
            arr[j] = 0;
        }
    }
    for (let i = 2; i < n; i++) {
        if (arr[i]) {
            cnt++
            // console.log(i)
        }
    }
    return cnt;
};

console.log(countPrimes(10));