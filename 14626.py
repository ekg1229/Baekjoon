num = list(input())
total = 0

for i in range(len(num)-1):
    if num[i] == '*':
        pass
    else:
        if (i+1) % 2 == 0: # 짝수 번째 문자이면
            total += 3*int(num[i])
        else:
            total += int(num[i])

for i in range(10): # *이 될 수 있는 숫자(0~9)
    if (num.index('*')+1) % 2 == 0:
        weight = 3
    else:
        weight = 1

    if (total + i * weight + int(num[-1])) % 10 == 0:
        print(i)
        break