import math
# n = int(input("Enter n:\n"))
n = 100
for x in range(1,n+1):
    if n%x ==0:
        print(x, end=" ")
print()

for x in range(1, int(math.sqrt(n))+1):
    if(x*x==n):
        print(x, end=" ")
        continue;
    if n%x ==0:
        print(x, end=" ")
        print(n//x, end=" ")
print()

x = 1
while x*x < n:
    if n%x==0:
        print(x, end=" ")
        print(n//x, end=" ")
    x = x+1
if(x*x==n):
    print(x, end=" ")
print()
