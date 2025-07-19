while True:
    sentence = input()
    if sentence == '.':
        break
    
    stack = []
    balanced = True
    for i in sentence:
        if i == '(' or i == '[':
            stack.append(i)
        elif i == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                balanced = False
                break
        elif i == ']':
            if len(stack) > 0 and stack[-1] == '[':
                stack.pop()
            else:
                balanced = False
                break
    
    if balanced and len(stack) == 0:
        print("yes")
    else:
        print("no")