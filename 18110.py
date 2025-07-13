import sys

n = int(input())
def round_custom(num):
    if num >= int(num) + 0.5:
        return int(num) + 1
    else:
        return int(num)
    
if n == 0:
    print(0)
else:
    level = []
    for i in range(n):
        level.append(int(sys.stdin.readline()))

    level.sort()
    pivot = round_custom(n*0.15)
    final = level[pivot:len(level)-pivot]
    print(round_custom(sum(final)/len(final)))