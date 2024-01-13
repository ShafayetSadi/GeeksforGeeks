# x = int(input("Enter x:\n"))
x = 3848
res = 0
while x>0:
    x=x//10
    res = res + 1

print("count of digit is :",res)