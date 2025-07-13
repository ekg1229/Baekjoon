import math
a, b, v = map(int, input().split())

if v == a:
    print(1)
elif v-a <= a-b:
    print(v-a+1)
else:
    print(math.ceil((v-a)/(a-b))+1)