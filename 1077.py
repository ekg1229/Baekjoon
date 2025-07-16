k = int(input())
num_list = []

for _ in range(k):
    temp = int(input())
    if temp != 0:
        num_list.append(temp)
    else:
        del num_list[-1]

print(sum(num_list))