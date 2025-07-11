import sys
input = sys.stdin.readline

n, m = map(int, input().split())
tree_height = list(map(int, input().split()))

left = 0
right = max(tree_height)
result = 0

while left <= right:
    mid = (left+right)//2
    total = 0

    ''' 시간 초과 발생
    for h in tree_height:
        if h > mid:
            total += (h - mid)
    '''
    total = sum(h - mid for h in tree_height if h > mid)
    
    if total >= m:
        result = mid
        left = mid + 1
    else:
        right = mid - 1

print(result)