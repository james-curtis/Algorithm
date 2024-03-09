# https://mp.weixin.qq.com/s/I47DxbXrTCQpt-7FIPW5lg

import sys

sys.stdin = open("1.txt", "r")

n, q = map(int, input().split(" "))

arr_str = input()
arr = map(int, arr_str.split(" "))

while True:
    try:
        l, r = map(int, input().split(" "))
    except EOFError:
        break

    print(
        sum(map(int, arr_str.replace("0", str(l)).split(" "))),
        sum(map(int, arr_str.replace("0", str(r)).split(" "))),
    )
