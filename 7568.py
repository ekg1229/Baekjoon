n = int(input())
people = []

for _ in range(n):
    weight, height = map(int, input().split())
    people.append([weight, height])

# 덩치 비교
scores = [0]*n
for i in range(len(people)):
    for j in range(len(people)):
        if i == j:
            pass
        else:
            if people[i][0] < people[j][0] and people[i][1] < people[j][1]:
                scores[i] += 1

result = [s+1 for s in scores]
print(' '.join(map(str, result)))