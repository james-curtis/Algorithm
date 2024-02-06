// https://leetcode.cn/problems/valid-parentheses/

/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    const map = {
        ')': '(', '}': '{', ']': '[',
    }
    let stack = []
    for (let i = 0; i < s.length; i++) {
        if (s[i] in map) {
            if (stack.pop() !== map[s[i]]) {
                return false
            }
        } else {
            stack.push(s[i]);
        }
    }
    console.log(stack, stack.length)
    return !stack.length;
};

// s = "()[]{}";
// s = `(){}}{`;
// console.log(isValid(s));