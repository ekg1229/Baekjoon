n = int(input())
members = []

for _ in range(n):
    age, name = input().split()
    members.append([int(age), name])

members.sort(key=lambda members: members[0])

for i in range(len(members)):
    print(members[i][0], members[i][1])