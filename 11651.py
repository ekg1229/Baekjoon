n = int(input())
points = []

for _ in range(n):
    x, y = map(int, input().split())
    points.append([x, y])

points.sort(key=lambda points: (points[1], points[0]))

for i in range(len(points)):
    print(points[i][0], points[i][1])