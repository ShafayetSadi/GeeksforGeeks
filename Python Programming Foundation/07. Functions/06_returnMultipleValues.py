def add_multiply(x, y):
    sum = x + y
    mul = x * y
    return sum, mul  # return as tuple

s, m = add_multiply(10, 20)
print("sum:", s)
print("mul:", m)




def add_multiply(x, y):
    sum = x + y
    mul = x * y

    return [sum, mul]  # return as list

s, m = add_multiply(10, 20)
print("sum:", s)
print("mul:", m)