x = 9
y = 4
print(x + y)
print(x - y)
print(x * y)
print(x / y)
print(x // y) # floor of division
# floor(3.2) = 3
# floor(5.9) = 5
# floor(-3.2) = -4
# floor(-5.9) = -6
print(x % y) # Remainder
print(x ** y) # x to the power y

x = -5
y = 2
print(x // y)

x = 5.0
y = 2
print(x // y)

x = 2
y = -2
print(x ** y)

"""
# Precedence is increasing to the down
(+) (-)      # Associativity is left to right
(*) (/) (//) # associativity is left to right
(**)         # Associativity is right to left

"""
print(5 + 2 * 3)
print(5 + 3 * 4 ** 2)
print(2**2**-1)