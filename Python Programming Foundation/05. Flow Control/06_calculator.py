import sys

print(""" Please Select Operation:
1.Add
2.Subtract
3.Multiply
""")

choice = int(input("Select Operation from 1,2 or 3:\n"))

if choice not in (1, 2, 3):
    print("invalid choice")
    sys.exit()

a = int(input("Enter First Number:\n"))
b = int(input("Enter Second Number:\n"))

if choice == 1:
    res = a + b
elif choice == 2:
    res = a - b
else:
    res = a * b
    
print("Result is:",res)