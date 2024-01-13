# n = int(input("Enter n:\n"))
n = 5
for i in range(1, n+1):
	for j in range(n-i):
		print(" ", end="")
	for j in range(i):
		print("*", end="")
	for j in range(i-1):
		print("*", end="")
	print()

for i in range(n):
    for j in range(n-i-1):
        print(" ",end= "")
    for k in range(2*i+1):
        print("*",end="")
    print()