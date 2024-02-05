# 给定n个正整数，求选出两个数拼接在一起能得到的最大整数 （ 例如1和2拼接得到21，123、4、5拼接得5123）

if __name__ == '__main__':
    arr = [101, 100, 100]
    sorted_arr = sorted(arr, reverse=True)
    res1 = f'{sorted_arr[0]}{sorted_arr[1]}'
    res2 = f'{sorted_arr[1]}{sorted_arr[0]}'
    print(res1 if int(res1) > int(res2) else res2)
