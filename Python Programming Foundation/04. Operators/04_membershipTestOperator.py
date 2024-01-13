# string: check for substring
# Dictionary: check for key
# List, Set, Tuple: check for membership
# in 
# not in

s = "geeksforgeeks"
print("g" in s)
print("for" in s)
print("gk" in s)

d = {10:"abc", 20:"efg"}
print(10 in d)
print("abc" in d)

l = [10, 20, 30, 15]
print(30 in l)
print(40 in l)
print([20, 30] in l)
print(40 not in l)