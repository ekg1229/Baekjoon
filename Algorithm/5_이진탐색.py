def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left+right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    return None

a = [0, 1, 1, 2, 2, 3, 4, 5, 46]
print(binary_search(a, 41))

''' 떡볶이 떡
n, m = map(int, input().split())
tteok_length = list(map(int, input().split()))

left = 0
right = max(tteok_length)

result = 0
while left <= right:
    total = 0
    mid = (left+right)//2
    
    for i in tteok_length:
        if i > mid:
            total += i - mid
    
    if total < m:
        right = mid - 1
    else:
        result = mid
        left = mid + 1

print(result)
'''