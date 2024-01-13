"""
Set:
-Distinct Elements
-Unordered
-No Indexing
-Union, Intersection, Set Difference, etc are fast
-Uses Hashing Internally
"""

s1 = {10, 20, 30}
print(s1)

s2 = set([20, 30, 40])
print(s2)

s3 = {} # Empty Dictionary
print(type(s3))

s4 = set()
print(type(s4))
print(s4)

s = {10, 20}
s.add(30)
print(s)

s.add(20)
print(s)

s.update([40, 50])
print(s)

s.update({60, 70}, [80, 90])
print(s)

s = {10, 30, 20, 40}
print(s)
s.discard(30)
print(s)
# discard won't give error if item is no present but remove will.
s.remove(40)
print(s)

s.clear()
print(s)

s.add(50)
print(s)

del s
# Error: s is not defined
# print(s)

s = {10, 20, 30, 40}
print(len(s))

print(20 in s)
print(50 in s)

s1 = {2, 4, 6, 8}
s2 = {3, 6, 9}

# Union of sets
print(s1 | s2) 
print(s1.union(s2))

# Intersection of sets
print(s1 & s2) 
print(s1.intersection(s2))

# Difference in sets
print(s1 - s2)
print(s1.difference(s2))

# Symmetric difference in sets
print(s1 ^ s2)
print(s1.symmetric_difference(s2))

print("Hola")

s1 = {2, 4, 6, 8}
s2 = {4, 8}

# returns true if there is no common element
print(s1.isdisjoint(s2))

print("\nissubset")
# return true if it is a subset
print(s1 <= s2)
print(s1.issubset(s2))

print()
# return true if proper subset
print(s1 < s2)

print("\nissuperset")
print(s1 >= s2)
print(s1.issuperset(s2))

print()

# return true if proper superset
print(s1 > s2)
