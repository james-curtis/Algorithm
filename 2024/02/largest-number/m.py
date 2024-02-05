# https://leetcode.cn/problems/largest-number/
from functools import cmp_to_key
from typing import List


class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        def cmp(x, y):
            return int(x + y) - int(y + x)

        num_sorted = sorted(map(str, nums), key=cmp_to_key(cmp), reverse=True)
        ret = ''.join(map(str, num_sorted))
        return '0' if ret[0] == '0' else ret


if __name__ == '__main__':
    s = Solution()
    p = [3, 30, 34, 5, 9]
    res = s.largestNumber(p)
    print(res)
