n = input()
num_list = []

for i in n:
    num_list.append(int(i))

result1, result2 = 0, 0
for i in range(len(num_list)):
    if i < len(num_list) // 2:
        result1 += num_list[i]
    else:
        result2 += num_list[i]

if result1 == result2:
    print("LUCKY")
else:
    print("READY")