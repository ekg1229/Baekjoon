def sort_quick(arr, start, end):
    if start >= end:
        return
    pivot = start
    left = start + 1
    right = end

    while left <= right:
        while left <= end and arr[left] <= arr[pivot]:
            left += 1
        while right > start and arr[right] >= arr[pivot]:
            right -= 1
        if left > right:
            arr[right], arr[pivot] = arr[pivot], arr[right]
        else:
            arr[left], arr[right] = arr[right], arr[left]
    sort_quick(arr, start, right-1)
    sort_quick(arr, right+1, end)

a = [1,4,3,5,2,46,1,2,0]
sort_quick(a, 0, len(a)-1)
print(a)