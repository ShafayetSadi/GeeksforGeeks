"""
Leap Year:
1. Multiple of 4 but not multiple of 100
2 Multiple of 400
"""
y = int(input("Enter Year:\n"))

if (y % 4 == 0) and (y % 100 != 0):
    print("Yes") # year is multiple of 4 and not divisible by 100

elif y % 400 == 0:
    print("yes") # year is multiple of 400

else:
    print("No")