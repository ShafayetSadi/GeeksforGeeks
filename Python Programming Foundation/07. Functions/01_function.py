def fun():
    print("fun() called")  # it will be printed when fun is called

def sum(a, b):
    return a+b

print("before calling fun()")
fun()  # fun() is called
fun()  # fun() is called
print(sum(5, 6))
print("after calling fun()")

"""
Applications of Funtions(or Methods)
- Avoid Code Redundancy and easy Maintainance
- Make Code Modular
- Abstraction 
- Avoid varialbe name collisons

"""