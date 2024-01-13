n = int(input("Enter n:\n"))

for x in range(2, n + 1):
    if n % x == 0:
        print(x)
        break

print("\n while loop")

x=2
while x<=n:
    if n%x ==0:
        print(x)
        break
    x = x+1
