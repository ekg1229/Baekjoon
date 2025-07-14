from collections import deque
import sys
stack = deque() # 스택 선언

def stack_operand(method, num=None):
    # 명령별 작업
    if method == "push":
        stack.append(num)
    elif method == "pop":
        if len(stack) != 0:
            print(stack.pop())
        else:
            print(-1)
    elif method == "size":
        print(len(stack))
    elif method == "empty":
        if not stack:
            print(1)
        else:
            print(0)
    elif method == "top":
        if len(stack) != 0:
            print(stack[-1])
        else:
            print(-1)

n = int(sys.stdin.readline())
for _ in range(n):
    method = sys.stdin.readline().strip()
    if " " in method:
        method, num = method.split()
        stack_operand(method, int(num))
    else:
        stack_operand(method)