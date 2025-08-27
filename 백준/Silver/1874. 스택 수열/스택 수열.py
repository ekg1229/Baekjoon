n = int(input())
answer_list = []
target_list = []
output = []

for _ in range(n):
    answer_list.append(int(input()))

target_index = 0

for i in range(1, n+1):
    target_list.append(i)
    output.append("+")
    while target_index < n:
        target_value = answer_list[target_index]
        if len(target_list) == 0:
            break
        elif target_list[-1] == target_value:
            target_list.pop()
            output.append("-")
            target_index += 1
        else:
            break

if len(target_list) != 0:
    print("NO")
else:
    print('\n'.join(output))