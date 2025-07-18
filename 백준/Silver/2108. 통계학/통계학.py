import sys
from collections import Counter

n = int(sys.stdin.readline())
num_list = []

for _ in range(n):
    num_list.append(int(sys.stdin.readline()))

num_list.sort()

#산술평균
print(round(sum(num_list)/len(num_list)))

# 최빈값
num_count = Counter(num_list)
num_sount_tuple = num_count.most_common()

#중앙값
print(num_list[len(num_list)//2])

if len(num_list) >1:
    if num_sount_tuple[0][1] == num_sount_tuple[1][1]:
        print(num_sount_tuple[1][0]) # 최빈값의 빈도수를 비교하여, 2개이상의 최빈값이 있으면 두번쨰로 작은것을 출력
    else:
        print(num_sount_tuple[0][0])
else:
    print(num_list[0])

#범위
if len(num_list) == 1:
    print(0)
else:
    print(abs(num_list[-1]-num_list[0]))