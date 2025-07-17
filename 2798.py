n, m = map(int, input().split())
card_list = list(map(int, input().split()))

result = 0
for i in range(len(card_list)):
    for j in range(i+1, len(card_list)):
        for k in range(j+1, len(card_list)):
            if (card_list[i] + card_list[j] + card_list[k]) <= m:
                result = max(result, card_list[i] + card_list[j] + card_list[k])

print(result)