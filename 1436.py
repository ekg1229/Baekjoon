n = int(input())

count = 0
number = '666'
while True:
    if '666' in number:
        count += 1
    if count == n:
        break
    number = str(int(number)+1)

print(number)