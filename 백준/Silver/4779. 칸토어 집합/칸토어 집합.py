def cantor_set(str):
    if len(str) == 1:
        return str
    else:
        pivot = len(str)//3
        return cantor_set(str[0:pivot])+' '*(pivot)+cantor_set(str[pivot*2:])

while True:
    try:
        n = int(input())
        result = '-'*(3 ** n)
        print(cantor_set(result))
    except:
        break