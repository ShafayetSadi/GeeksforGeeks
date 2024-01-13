# n = int(input("Enter n:\n"))
n = 5

if n == 0:
    print(1)
elif n == 1:
    print(1, 1)
else:
    print(1, 1, end=' ')

    a = 1
    b = 1
    for i in range(2, n + 1):
        c = a + b
        print(c, end=' ')
        a, b = b, c


"""
Count ways to reach n-th Stair:

countways(3) = 3
countways(4) = 5
countways(5) = countways(3) + countways(4)

we have to fibonacci sequence here

"""