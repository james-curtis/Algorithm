// https://leetcode.cn/problems/number-of-atoms/
// 726. 原子的数量


/**
 * @param {string} formula
 * @return {string}
 */
var countOfAtoms = function(str) {
    function stringify(map) {
        map = new Map([...map].sort())
        let res = ``
        for (const [e, cnt] of map.entries()) {
            res += cnt === 1 ? e : `${e}${cnt}`
        }
        return res
    }

    function parse(str) {
        const map = new Map()
        str.replace(/([A-Z][a-z]*)(\d*)/g, function (match, p1, p2, offset, str) {
            let tmp = map.get(p1)
            map.set(p1, p2 === `` ? 1 : Number(p2))
            if (tmp !== undefined) map.set(p1, map.get(p1) + tmp)
        })
        return map
    }

    function flat(str) {
        const regex = /\(([\w\d]+)\)(\d+)/g
        if (!regex.test(str)) return str;
        let newStr = str.replace(new RegExp(regex), function replacer(match, p1, p2, offset, str) {
            let cnt = Number(p2)
            let innerMap = (cnt === 0 ? parse(p1) : new Map([...parse(p1).entries()].map(e => ([e[0], e[1] * cnt]))))
            return stringify(innerMap)
        })
        return flat(newStr)
    }

    return stringify((parse(flat(str))));
};