l = int(input())
string = input()

pivot, result = 0, 0
for i in string:
    result += (ord(i)-96)*31**pivot
    pivot += 1    

print(result%1234567891)