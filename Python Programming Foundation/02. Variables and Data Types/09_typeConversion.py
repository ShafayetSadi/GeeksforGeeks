"""
Type Conversion in Python:
 -Implicit Type Conversion
 -Explicit Type Conversion

"""

# Implicit
a = 10
b = 1.5
c = a + b
print(c)

d = True
e = a + d 
print(e)

e = b + d 
print(e)

# Explicit
s = "135"
# i = 10 + s # Error
i = 10 + int(s) 
f = float(s)
print(i)
print(s)

s = "geeks"
print(list(s))
print(tuple(s))
print(set(s))

l = ['a', 'b', 'c']
print(l)
print(str(l))

a = 10
b = 11
print(str(a)+str(b))
c = 12.5
print(str(c) + "11")

t = (10, 20, 30)
print(t)
print(list(t))
s = {10, 20, 30}
print(s)
print(list(s))

a = 15
print(bin(a))
print(hex(a))
print(oct(a))

a = "1001"
print(int(a, 2))
b = "12"
print(int(b, 8))
c = "A1"
print(int(c, 16))
