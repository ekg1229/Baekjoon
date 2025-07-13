n = int(input())

if n == 1:
    print(1)
else:
    result = 1
    pivot = 1
    while True:
        if result < n <= result + 6 * pivot:
            print(pivot+1)
            break
        result += 6 * pivot
        pivot += 1