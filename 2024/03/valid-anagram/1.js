// https://leetcode.cn/problems/valid-anagram/description/

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
    if (s.length!==t.length) return false;
    const mapS = {}, mapT = {};
    for (let i = 0; i < s.length; i++) {
        mapS[s[i]] = (mapS[s[i]] ?? 0) + 1;
        mapT[t[i]] = (mapT[t[i]] ?? 0) + 1;
    }
    for (const mapSKey in mapS) {
        if (mapS[mapSKey] !== mapT[mapSKey]) return false;
    }
    return true;
};


s = "anagram", t = "nagaram"
isAnagram(s, t);