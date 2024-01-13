def getFirstDigit(x):    
    while x >= 10:
        x = x // 10
    return x

# x = int(input("Enter x:\n"))
x = 76943
print(getFirstDigit(x))

print()

from math import log10

def getFirstDigit(x):
    d = int(log10(x))
    res = x // (10 ** d)
    return res

# x = int(input("Enter x:\n"))
print(getFirstDigit(x))