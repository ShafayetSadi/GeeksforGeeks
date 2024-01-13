"""
Dictionary in Python:
-Collection of key-value pairs
-Unordered
-ALl keys must be distinct
-Values may be repeated
-Uses Hashing internally
"""

d = {110:"xyz", 101:"abc", 105:"bcd", 104:"abc"}
print(d)

d = {}
print(d)

d["laptop"] = 50000
d["mobile"] = 20000
d["earphones"] = 2000
print(d)

print(d["mobile"])

print("Hola")

d = {110:"abc", 101:"xyz", 105:"pqr"}

print(d.get(101))
print(d.get(125))
print(d.get(125, "NA"))

if 125 in d:
	print(d[125])
else:
	print("NA")


d = {110:"abc", 101:"xyz", 105:"pqr", 106:"bcd"}
print(d)
d[101] = "wxy"
print(d)
print(len(d))

print(d.pop(105))
print(d)

del d[106]
print(d)

d[108] = "cde"
print(d)
print(d.popitem()) # Return a tuple of last inserted item
print(d)