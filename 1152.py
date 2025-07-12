# # 리스트 split으로 담으니까 문제 해결됨
# word_list = list(input().split())
# print(len(word_list))

# 맨 앞, 맨 뒤 공백 있을 경우 단어 개수 -1
result = 0
sentence = input()

for i in sentence:
    if i == ' ':
        result += 1

# 단어 개수는 공백 + 1
result += 1

if sentence[0] == ' ':
    result -= 1
if sentence[-1] == ' ':
    result -= 1

print(result)