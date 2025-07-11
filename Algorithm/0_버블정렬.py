# Python 버전
def bubble_sort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

a = [1,4,3,5,2,46,1,2,0]
bubble_sort(a)
print(a)