# n = int(input("Enter n:\n"))
n = 13

if n<=1:
    print("No")
else:
    for i in range(2,n):
        if n%i == 0:
            print("No")
            break
    # This is a Python syntax
    else:   # else will execute ,if for exehausted naturally  
        print("Yes")

if n<=1:
    print("No")
else:
    x = 2
    while x*x <= n:
        if n%x==0:
            print("No")
            break
        x = x+1
    else:
        print("Yes")
