n = int(input())
a = list(map(int, input().split()))
a.sort()

n = int(input())
test_num = list(map(int, input().split()))

def binary_search(array, key):
    left, right = 0, len(array) - 1
    while left <= right:
        mid = (left + right) // 2

        if array[mid] == key:
            return print(1)
        elif array[mid] < key:
            left = mid + 1
        else:
            right = mid - 1
    return print(0)

for test in test_num:
    binary_search(a, test)