x = 100 # x reference to 100
y = 200 # y reference to 200
print(x, y)
x = y # x and y reference to 200
y = x # Nothing changes as y already refers to 200
# x and y is same
print(x, y)

x = 100
y = 200
temp = x
x = y
y = temp
print(x,y)

# Best way
x = 100
y = 200
x, y = y, x
print(x, y)