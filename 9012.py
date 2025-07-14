n = int(input())

def is_vps(string):
    ps_list = [0, 0]
    for i in string:
        if i == '(':
            ps_list[0] += 1
        elif i == ')':
            if ps_list[0] >= 1:
                ps_list[0] -= 1
            else:
                return print("NO")
    if ps_list[0] != ps_list[1]:
        return print("NO")
    else:
        return print("YES")

for _ in range(n):
    x = input()
    is_vps(x)