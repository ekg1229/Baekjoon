m, n = map(int, input().split())
blind = []
blind_total = [0 for _ in range(5)]

for _ in range(5*m+1):
    blind.append(input())

for i in range(1, 5*n+1, 5):
    count_star = []
    for j in range(1, 5*m+1):
        if j % 5 != 0 and len(count_star) < 4:
            count_star.append(blind[j][i])

            if len(count_star) == 4:
                blind_total[count_star.count('*')] += 1
                count_star = []

print(' '.join(map(str, blind_total)))