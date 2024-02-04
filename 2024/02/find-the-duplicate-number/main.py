# https://leetcode.cn/problems/find-the-duplicate-number/description/
from typing import List


class Solution:
    def findDuplicate1(self, nums: List[int]) -> int:
        mask = [0 for i in range(pow(10, 5) + 100)]
        for i in nums:
            mask[i] += 1
            if mask[i] > 1:
                return i

    def findDuplicate(self, nums: List[int]) -> int:
        fast = 0
        slow = 0

        def get(arr, idx):
            try:
                return arr[idx]
            except:
                return None

        while True:
            fast = get(nums, get(nums, fast))
            slow = get(nums, slow)
            if not fast:
                return False
            if fast == slow:
                return fast


if __name__ == '__main__':
    s = Solution()
    # s.findDuplicate([1, 3, 4, 2, 2])
    s.findDuplicate([3, 1, 3, 4, 2])
