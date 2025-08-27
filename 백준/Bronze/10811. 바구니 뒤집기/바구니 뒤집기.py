n, m = map(int, input().split())
result = [i for i in range(1, n+1)]

for _ in range(m):
    # 바구니 역순 방법
    i, j = map(int, input().split())
    reverse_list = result[i-1:j]
    result = result[:i-1] + reverse_list[::-1] + result[j:]

print(' '.join(map(str, result)))