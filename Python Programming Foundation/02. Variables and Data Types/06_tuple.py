# Tuple is Immutable
# Faster than list

t = (10, 20, "geek")
print(t)

t = ()
print(type(t))
print(t)

t = (10) # int type
print(type(t))
print(t)

t = (10, )
print(type(t))
print(t)

t = 10, 20, 30, 40, 10
print(t)

print(t[2])
print(t[-1])
print(t[-2])

print(t[1:3])

print(len(t))

print(t.count(10))

print(t.index(20))