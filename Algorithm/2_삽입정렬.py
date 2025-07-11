def sort_insert(arr):
    for i in range(1, len(arr)):
        for j in range(i, 0, -1):
            if arr[j] < arr[j-1]:
                arr[j], arr[j-1] = arr[j-1], arr[j]
            else:
                break
    return arr

a = [119, 0,1,4,3,5,2,46,1,2,0]
print(sort_insert(a))