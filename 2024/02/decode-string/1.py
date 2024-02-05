# https://leetcode.cn/problems/decode-string/

class Solution:
    def decodeString(self, s: str) -> str:
        if s.count(']') == 0:
            return s
        # 找到第一个 ]
        right = s.find(']')
        # 找到前面的 [
        left = s.rfind('[',0,right)
        # 匹配前面的数字
        num = ''
        idx=left
        while True:
            idx-=1
            if s[idx].isdigit() is False:
                break
            num = s[idx] + num
        # 展开
        flatten = s[left+1:right]*int(num)
        res = s[:idx+1] + flatten + s[right+1:]
        # 递归
        print(flatten, res)
        return self.decodeString(res)

import re
class Solution:
    def decodeString(self, s: str) -> str:
        if s.find(']') == -1:
            return s
        match = re.search(r'(\d+)\[(\w+)\]', s)
        res = s.replace(match[0], match[2] * int(match[1]))
        return self.decodeString(res)