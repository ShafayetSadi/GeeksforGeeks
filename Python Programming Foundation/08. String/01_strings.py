"""
Strings in Python
- Sequence of characters
- Used to store text data
- Typically small set of characters
- Characters 'A' to 'Z' are stored as values from 65 to 90
- Characters 'a' to 'z' are stored as values from 97 to 122
"""

print(ord("a"))     # chr to ord
print(ord("A"))
print(chr(97))      # ord to chr
print(chr(65))

print()

s = "geek"
print(s)
print(s[0])
print(s[-1])
print(s[1])
print(s[-2])

# Strings are immutable
s = "geek"
# s[0] = "e"  # error: item assignment not supported
print(s)

print()

# We can also use 3 single quote
s = """Hi,
This is pythons course.
Hope you are enjoying it."""
print(s)
