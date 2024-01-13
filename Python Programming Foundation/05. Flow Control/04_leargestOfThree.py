a = int(input("Enter First Number:\n"))
b = int(input("Enter Second Number:\n"))
c = int(input("Enter Third Number:\n"))

if a >= b and a >= c:
    print("Largest number is:", a)  # a is greater than b and c

elif b >= a and b >= c:
    print("Largest number is:", b)  # b is greater than a and c

elif c >= a and c >= b:
    print("Largest number is:", c)  # c is greater than a and b


print("Largest Number is:",end=" ")

if a >= b:

    if a >= c:
        print(a)  # a>=b and a>=c
    else:
        print(c)  # a>=b and c>a
else:
    if b >= c:
        print(b)  # b>a and b>=c
    else:
        print(c)  # b>a and b<c

print("Largest number is:", max(max(a, b), c))
print("Largest number is:", max(a, b, c))