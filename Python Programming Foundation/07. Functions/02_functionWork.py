def fun2():
    print("Inside fun2")

def fun1():
    print("Before fun2()")
    fun2()
    print("After fun2()")

# main code
print("Before fun1()")
fun1()
print("After fun1()")