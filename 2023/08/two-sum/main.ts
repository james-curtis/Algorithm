// https://leetcode.cn/problems/two-sum/?envType=study-plan-v2&envId=top-100-liked
// 1. 两数之和

function twoSum(nums: number[], target: number): number[] {
    const map = new Map()
    const res: number[] = []
    for (const [idx, e] of nums.entries()) {
        if (map.has(target - e)) {
            return [idx, map.get(target - e)]
        }
        map.set(e, idx)
    }
    return []
};


var nums = [2, 7, 11, 15], target = 9
console.log(twoSum(nums, target))

