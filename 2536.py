n = int(input())
colored_paper = []
x_list, y_list = [], []
for _ in range(n):
    x, y = map(int, input().split())
    colored_paper.append([x, y])
    x_list.append(x)
    y_list.append(y)

result_paper = [[0 for _ in range(100)] for _ in range(100)]

for points in colored_paper:
    for i in range(points[1], points[1]+10):
        for j in range(points[0], points[0]+10):
            result_paper[j][i] = 1

count = 0
for i in range(max(y_list)+10):
    for j in range(max(x_list)+10):
        if result_paper[j][i] == 1:
            count += 1

print(count)