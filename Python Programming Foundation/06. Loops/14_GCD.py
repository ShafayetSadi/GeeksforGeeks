import math

# a = int(input("Enter a:\n"))
# b = int(input("Enter b:\n"))
a = 50
b = 15

small = min(a,b)
for i in range(1,small+1):
    if (a%i ==0 and b%i ==0):
        gcd = i
        
print("Gcd is ",gcd)


#using lib fun
_gcd = math.gcd(a,b)

print("Gcd is ", _gcd)