def fun():
    # Local variable
    a = 10
    b = 20
    print(a, b, c, d) # c and d from outside of function, Global variable

c = 30
d = 40
fun()
print(c, d)

print()

def fun():
    x = 10  # it does'not change global variable

x = 15
fun()
print(x)

print()

def fun():
    global x
    x = 10  # global var change to 10

x = 15
fun()
print(x)    # x is changed to 10 inside fun

print()

def fun():
    # We can acces values of global variable
    y = x + 5
    print(y)
    # x = x + 5 # This will give error

x = 15
fun()
print(x)

print()

def fun():
    x = 10      # creating local var
    globals()['x'] = 20     # modifying global var
    print(x)            # local var

x = 15
fun()
print(x)        # x modified to 20 in fun