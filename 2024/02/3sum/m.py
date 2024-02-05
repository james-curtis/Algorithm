# https://leetcode.cn/problems/3sum/description/
from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        mapper = {}
        for idx, i in enumerate(nums):
            mapper[i] = idx
        res = set()
        for a_idx in range(len(nums)):
            for b_idx in range(a_idx + 1, len(nums)):
                target = 0 - nums[a_idx] - nums[b_idx]
                if mapper.get(target) is not None and mapper.get(target) not in [a_idx, b_idx]:
                    temp = [nums[a_idx], nums[b_idx], target]
                    res.add(','.join(map(str, sorted(temp))))
        return list(map(lambda e: list(map(int, e.split(','))), res))


if __name__ == '__main__':
    s = Solution()
    p = [-1, 0, 1, 2, -1, -4]
    print(s.threeSum(p))
