"""
Geometric Progression nth Term:
A person gets 5000 as salary on 1st Jan 2020. The salary doubles every
year. Find the salary that the person will get on 1st Jan 2030
"""

a = int(input("Enter a:\n"))    # first number
r = int(input("Enter r:\n"))    # common ration
n = int(input("Enter n:\n"))    # nth

res = a*r**(n-1)

print()

print("nth term is",res)
