// https://www.nowcoder.com/discuss/353157659098554368

function flat(arr) {
    const res = [];
    for (const arrElement of arr) {
        if (Object.prototype.toString.call(arrElement) === '[object Array]') {
            res.push.apply(res, flat(arrElement));
            continue;
        }
        res.push(arrElement);
    }
    return res;
}

console.log(flat([1, [2, [[3, 4], 5, []], 6]]))