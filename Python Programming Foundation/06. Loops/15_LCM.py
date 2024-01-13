import math

# a = int(input("Enter a:\n"))
# b = int(input("Enter b:\n"))
a = 50
b = 15

res = max(a,b)
while res <= a*b:
    if res%a == 0 and res%b == 0:
        break
    res +=1
    
print("Lcm is ",res)

# using lib

gcd = math.gcd(a,b)
lcml = (a*b)//gcd
print("lcm is ", lcml)