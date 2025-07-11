from bisect import bisect_left, bisect_right

n = int(input()) # 숫자 카드의 개수
card_num = list(map(int, input().split())) # 숫자 카드
card_num.sort()

m = int(input()) # 구해야 할 정수 개수
search_num = list(map(int, input().split())) # 구해야 할 정수

def count_by_range(arr, left_value, right_value):
    right_index = bisect_right(arr, right_value)
    left_index = bisect_left(arr, left_value)
    return right_index - left_index

for i in range(len(search_num)):
    print(count_by_range(card_num, search_num[i], search_num[i]), end=' ')