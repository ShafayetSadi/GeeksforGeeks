# All slicing below is same for list, tuple and string
l = [10,20,30,40,50]

print(l[0:5:2]) # start:0, stop:5, step:2

print(l[:4]) # start: 0, stop:4, step:1

print(l[2:]) # start:2,  stop:end of string, step:1

print(l[1:4]) # start:1, stop:4, step:1

print(l[4:1:-1]) # start:4, stop:1,step:-1

print(l[-1:-6:-1]) # start:-1, stop:-6, step:-1

print(l[::-1]) # this is same as before, returns reverse

print(l[0:5])

print(l[:]) 

print()

l1 = [10,20,30]
l2 = l1[:] # list having same element has different id

t1 = (10,20,30)
t2 = t1[:]  # tuple having same element has same id

s1 = "geeks"
s2 = s1[:] # string of same value have same id

print(l1 is l2)
print(t1 is t2)
print(s1 is s2)
