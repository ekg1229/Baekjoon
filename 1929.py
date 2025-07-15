# 소수 구하기 - 에라토스테네스의 체(배수 제거)
m, n = map(int, input().split())

prime = [True] * (n+1)
prime[0], prime[1] = False, False

for i in range(2, int(n**0.5)+1):
    if prime[i]:
        for j in range(i*i, n+1, i):
            prime[j] = False

for i in range(m, n+1):
    if prime[i]:
        print(i)