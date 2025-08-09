import sys
n, k = map(int, sys.stdin.readline().split())

count = 0
temp = []
for i in range(n):
    a, b = map(int, sys.stdin.readline().split())
    if a >= b:
        count += 1
    else:
        temp.append(b-a)

if count >= k:
    print(0)
else:
    pivot = k - count # 입찰 변경 필요 수량
    temp.sort()
    print(temp[pivot-1])