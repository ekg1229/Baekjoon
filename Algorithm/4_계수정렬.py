a = [1,4,3,5,2,46,1,2,0]
cnt = [0] * (max(a) + 1)

for i in a:
    cnt[i] += 1

for i in range(len(cnt)):
    for j in range(cnt[i]):
        print(i, end=' ')