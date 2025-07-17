n, m = map(int, input().split())
board = []

for i in range(n):
    board.append(input())

min_change = 32
# 시작점 좌표(x, y)
for y in range(m-7):
    for x in range(n-7):
        count1 = count2 = 0
        # 8*8 사이즈 검사 로직
        for i in range(y, y+8):
            for j in range(x, x+8):
                if (i+j) % 2 == 0:
                    if board[j][i] == 'B':
                        count1 += 1
                    else:
                        count2 += 1
                else:
                    if board[j][i] == 'W':
                        count1 += 1
                    else:
                        count2 += 1

        min_change = min(min_change, count1, count2)
print(min_change)