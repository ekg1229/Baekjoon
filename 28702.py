a = input()
b = input()
c = input()

def FizzBuzz(num):
    if num % 3 == 0 and num % 5 == 0:
        print("FizzBuzz")
    elif num % 3 == 0:
        print("Fizz")
    elif num % 5 == 0:
        print("Buzz")
    else:
        print(num)

if a.isdigit():
    FizzBuzz(int(a)+3)
elif b.isdigit():
    FizzBuzz(int(b)+2)
else:
    FizzBuzz(int(c)+1)