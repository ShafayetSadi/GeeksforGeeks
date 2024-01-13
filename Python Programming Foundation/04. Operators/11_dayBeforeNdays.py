"""
Sunday(0), Monday(1), Tuesday(2), Wednesday(3), Thrusday(4),
Friday(5), Saturday(6)
"""

d = int(input("Enter d: "))
n = int(input("Enter n: "))

# d = 0
# n = 9
# (0-9)%7 == (5 - 2*7)%7 == 7

print((d-n)%7)