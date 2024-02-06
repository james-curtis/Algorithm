// https://www.nowcoder.com/discuss/353157659098554368
/*
 * 1. 实现一个函数，接受数组作为参数，数组元素为整数或者数组（数组里面还可能有数组），函数返回扁平化后的数组。要求给出不使用递归、不使用字符串处理的解法
 * 如：输入 [1, [2, [ [3, 4], 5, []], 6]]，输出 [1, 2, 3, 4, 5, 6]
 */

// function flat(arr) {
//     const res = [];
//     for (const arrElement of arr) {
//         if (Object.prototype.toString.call(arrElement) === '[object Array]') {
//             res.push.apply(res, flat(arrElement));
//             continue;
//         }
//         res.push(arrElement);
//     }
//     return res;
// }


function flat(arr) {
    for (let i = 0; i < arr.length;) {
        if (Object.prototype.toString.call(arr[i]) === '[object Array]') {
            arr.splice(i, 1, ...arr[i]);
            continue
        }
        i++
    }
    return arr
}

console.log(flat([1, [2, [[3, 4], 5, []], 6]]))