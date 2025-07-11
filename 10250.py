t = int(input()) # test case

room_first = 1 # 층 수
room_last = 0 # 방 수

for i in range(t):
    h, w, n = map(int, input().split()) # 호텔 층 수(세로), 각 방 수(가로), 손님 순번

    # 방 배정 알고리즘
    while True:
        if n // h >= 1: # 층 수 멈춤
            print("stop")
            break
        else:
            room_first +=1
            print(room_first)
    
    room_last = n / (room_first*h)
    print(str(room_first)+'0'+str(room_last))