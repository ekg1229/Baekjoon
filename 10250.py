t = int(input()) # test case

# 방 배정 알고리즘
def room_number(height, width, num):
    cnt = 0
    for w in range(1, width+1):
        for h in range(1, height+1):
            cnt += 1
            if cnt == num and w < 10:
                return str(h) + str(0) + str(w)
            elif cnt == num and w >= 10:
                return str(h) + str(w)

for i in range(t):
    h, w, n = map(int, input().split())
    print(room_number(h, w, n))