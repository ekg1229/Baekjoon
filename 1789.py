s = int(input())

num = 1
count = 0
while s > 0:
    s -= num
    num += 1
    count += 1

if s < 0:
    print(count-1)
else:
    print(count)