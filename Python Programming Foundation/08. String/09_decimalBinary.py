def decToBinary(n):
    if n == 0:
        return "0"
    res = ''
    while n > 0:
        res = res + str(n % 2)
        n = n // 2
    return res[::-1]
    

for i in range(1,8):
    print(i,decToBinary(i))

print()

def decToBin(n):
    res = bin(n)
    return res[2:]


for i in range(1, 8):
    print(i, decToBin(i))

print()

def binToDec(b):
    res = 0
    p = 1
    for x in reversed(b):
        res = res + int(x) * p
        p = p * 2
    return res

print(binToDec("110"))

print()

def BinToDec(b):
    res = int(b, 2)
    return res

print(BinToDec('1100'))
