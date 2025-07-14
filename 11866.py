from collections import deque

n, k = map(int, input().split())

queue = deque(i for i in range(1, n+1))
result = []

while len(queue) != 0:
    for i in range(k-1):
        temp = queue[0]
        del queue[0]
        queue.append(temp)
    result.append(queue.popleft())

print('<'+', '.join(map(str, result))+ '>')