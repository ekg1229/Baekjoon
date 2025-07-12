n = int(input())
save_points = []

for _ in range(n):
    x, y = map(int, input().split())
    save_points.append([x, y])

save_points.sort()

for i in range(len(save_points)):
    print(save_points[i][0], save_points[i][1])