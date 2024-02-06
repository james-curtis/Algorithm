// https://zhuanlan.zhihu.com/p/59591972
// https://blog.csdn.net/chk_plusplus/article/details/118099852
// randA^2() = A*(randA() - 1) + randA

function rand5() {
    return Math.ceil(5 * Math.random())
}

function rand7() {
    const fn = () => 5 * (rand5() - 1) + rand5()
    let res = fn();
    while (res > 7) {
        res = fn()
    }
    return res
}

// console.log(rand7())
function rand7() {
    return Math.ceil(7 * Math.random());
}

function rand10() {
    const fn = () => (rand7() - 1) * 7 + rand7()
    let ans = fn()
    while (ans > 10) {
        ans = fn()
    }
    return ans
}

function test() {
    let m = new Map();
    for (let i = 0; i < 10 ** 7; i++) {
        let n = rand10()
        m.set(n, ~~m.get(n) + 1)
    }
    console.log(m);
}

test()