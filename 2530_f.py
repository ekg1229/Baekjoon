#2530번 문제 - 기다리는 중
h, m, s = map(int, input().split())
add_seconds = int(input())

# 더해야 할 시간/분/초
add_hour = add_seconds // 3600
add_min = (add_seconds % 3600) // 60
add_sec = add_seconds - (add_hour*3600+add_min*60)

# 시간 계산
if s + add_sec > 59:
    m += 1
    s = (s + add_sec) % 60
else:
    s = s + add_sec

if m + add_min > 59:
    h += 1
    m = (m + add_min) % 60
else:
    m = m + add_min

if h + add_hour > 23:
    h = (h + add_hour) % 24
else:
    h = h + add_hour


print(h, m, s)