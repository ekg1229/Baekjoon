n, k = map(int, input().split())
coin_list = []
for _ in range(n):
    coin_list.append(int(input()))

coin_num = 0
while k != 0:
    min_pivot = 0
    for i in coin_list:
        if k >= i:
            min_pivot = i
    
    coin_num += k // min_pivot
    k %= min_pivot

print(coin_num)