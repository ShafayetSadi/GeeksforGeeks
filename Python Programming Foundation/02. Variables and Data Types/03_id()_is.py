print(id(5))
a = 10
print(id(a))
b = a # Both refers to same location
print(id(b)) # id is same

a = 100
b = 100
# literals are stored in same location if they have same values 
print(id(a))
print(id(b))

print(a is b)
x = a
print(x is b)
x = 20
print(x is b) 

c = "sadi"
d = "sadi"
print(id(c))
print(id(d))
print(c is d)