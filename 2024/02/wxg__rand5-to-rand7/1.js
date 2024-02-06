// https://zhuanlan.zhihu.com/p/59591972

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

function test() {
    let m = new Map();
    for (let i = 0; i < 10 ** 7; i++) {
        let n = rand7()
        if (!m.has(n)) {
            m.set(n, 1);
        } else {
            m.set(n, m.get(n) + 1)
        }
    }
    console.log(m);
}

test()