# https://mp.weixin.qq.com/s/I47DxbXrTCQpt-7FIPW5lg

import sys

sys.stdin = open("i.txt", "r")

length, k = map(int, input().split(" "))

test_str = input()

M_cnt, T_cnt = (
    test_str.count("M"),
    test_str.count("T"),
)

print(M_cnt + T_cnt + min(length - M_cnt - T_cnt, k))
