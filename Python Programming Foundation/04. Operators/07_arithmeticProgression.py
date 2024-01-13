"""
Arithmetic Progression nth Term:
A person gets 5000 salary on 1st August 2020. The salary increases
by 2000 every month. Find the salary that the person is going to get
on 1st August 2025.
"""
a = int(input("Enter a:\n"))    # first number
d = int(input("Enter d:\n"))    # difference
n = int(input("Enter n:\n"))    # nth

res = a + (n - 1) * d

print()

print("nth term is",res)
