import sys
n, m = map(int, input().split())
list1 = set()
list2 = set()

for i in range(n+m):
    temp = sys.stdin.readline().rstrip()
    if i < n:
        list1.add(temp)
    else:
        list2.add(temp)

result = list(list1 & list2)
result.sort()

print(len(result))
for i in result:
    print(i)