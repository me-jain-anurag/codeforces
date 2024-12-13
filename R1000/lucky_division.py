import sys
n = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}
taken = int(input())
for num in n:
    if (taken % num == 0):
        print('YES')
        sys.exit(0)
print("NO")