k, n = map(int, input().split())
lan_length = []

for _ in range(k):
    lan_length.append(int(input()))

left = 1
right = max(lan_length)

result = 0
while left <= right:
    mid = (left+right)//2
    total = 0

    for i in range(len(lan_length)):
        total += (lan_length[i] // mid)
    
    if total >= n:
        result = mid
        left = mid + 1
    else:
        right = mid - 1

print(result)