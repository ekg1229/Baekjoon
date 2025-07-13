student_list = [i for i in range(1, 31)]

for _ in range(28):
    student_list.remove(int(input()))

for i in student_list:
    print(i)