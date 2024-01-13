l = [10,16,17,18,19,15]

for x in l:
    if x%5==0:      # if multiple of 5, continue
        continue
    print(x)
    
print()

for x in l:
    if x%5!=0:
        print(x)
print()

i = 0
while i <= 5:
    if i == 3:
        i = i + 1
        continue
    print(i, i * i)
    i = i + 1
print()