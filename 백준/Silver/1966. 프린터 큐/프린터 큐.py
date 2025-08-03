from collections import deque
t = int(input())

for _ in range(t):
    print_queue = deque()
    n, m = map(int, input().split())
    printer = list(map(int, input().split()))
    for i in printer:
        print_queue.append(i)
    
    count, target_index = 0, m
    # main Algorithm
    while True:
        if print_queue[0] < max(print_queue):
            data = print_queue.popleft()
            print_queue.append(data)
            target_index -= 1
            if target_index < 0:
                target_index = len(print_queue)-1
        elif print_queue[0] == max(print_queue):
            if target_index == 0:
                count += 1
                print_queue.popleft()
                print(count)
                break
            else:
                count += 1
                print_queue.popleft()
                target_index -= 1
                if target_index < 0:
                    target_index = len(print_queue)-1