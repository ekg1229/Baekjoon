num = input()
input_num = [0 for i in range(10)]

for i in num:
    input_num[int(i)] += 1

if abs(input_num[9] - input_num[6]) >= 2:
    mid = (input_num[6]+input_num[9]) // 2
    if (input_num[6]+input_num[9]) % 2 == 0:
        input_num[6] = input_num[9] = mid
    else:
        input_num[6] = mid
        input_num[9] = mid + 1

print(max(input_num))