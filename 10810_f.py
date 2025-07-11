n, m = map(int, input().split())
result = [0 for _ in range(n)]

for _ in range(m):
    i, j, k = map(int, input().split())
    
    for cnt in range(i-1, j):
        result[cnt] = k

print(' '.join(map(str, result)))