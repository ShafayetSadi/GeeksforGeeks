def fun(x):
    x = 15 # create a new local variable

x = 10
fun(x)
print(x)

def fun(l):
    l.append(15) # appends in the same list

l = [10, 20, 30]
fun(l)
print(l)

print("--------------------------")

def fun(x):
    print(id(x))
    x = 15
    print(id(x))

x = 10
fun(x)
print(id(x))


def fun(l):
    print(id(l))
    l.append(15)
    print(id(l))

l = [10, 20, 30]
fun(l)
print(id(l))

print("--------------------------")

def fun(l):
    l = [40, 50]   # assining to l


l = [10, 20, 30]
fun(l)
print(l)