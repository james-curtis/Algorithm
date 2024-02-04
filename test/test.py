from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for idx, i in enumerate(nums):
            if map.get(target - i) is not None:
                return [map[target - i], idx]
            map[i] = idx
        return False


if __name__ == '__main__':
    s = Solution()
    res = s.twoSum([3, 2, 4], 6)
    print(res)
