word = input()
words_list = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

index, count = 0, 0
while index < len(word):
    flag = False
    for i in words_list:
        if word[index:index+len(i)] == i:
            index += len(i)
            count += 1
            flag = True
    if not flag:
        index += 1
        count += 1
print(count)