n = int(input())
words = []

for _ in range(n):
    words.append(input())

set_list = list(set(words))
sort_list = sorted(set_list)
sort_list.sort(key=len)

for i in sort_list:
    print(i)