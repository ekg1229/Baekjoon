n = int(input())
test_num = list(map(int, input().split()))

def is_prime(num):
    if num == 1:
        return False
    else:
        for i in range(2, num):
            if num % i == 0:
                return False
        return True

result = 0
for num in test_num:
    if is_prime(num):
        result += 1

print(result)