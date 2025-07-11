while True:
    try:
        string = input()
        result = [0 for _ in range(4)]

        for text in string:
            if text.isupper():
                result[1] += 1
            elif text.islower():
                result[0] += 1
            elif text.isdigit():
                result[2] += 1
            elif text.isspace():
                result[3] += 1

        print(' '.join(map(str, result)))
    except:
        break