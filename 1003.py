t = int(input())
global fibo_list
fibo_list = [0 for _ in range(41)]

for i in range(len(fibo_list)):
    if i == 0:
        fibo_list[i] = 0
    elif i == 1:
        fibo_list[i] = 1
    else:
        fibo_list[i] = fibo_list[i-1] + fibo_list[i-2]

for _ in range(t):
    num = int(input())
    if num == 0:
        print(1, 0)
    else:
        print(fibo_list[num-1], fibo_list[num])