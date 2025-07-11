import sys
input = sys.stdin.readline

n = int(input())
count = [0] * 10001

for _ in range(n):
    num = int(input())
    count[num] += 1

for i in range(10001):
    if count[i]:
        for _ in range(count[i]):
            sys.stdout.write(f'{i}\n')