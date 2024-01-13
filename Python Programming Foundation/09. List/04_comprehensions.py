# List Comprehension
l1 = [x for x in range(11) if x%2==0]
print(l1)

l2 = [x for x in range(11) if x%2!=0]
print(l2)

print()

def getSmaller(l, x):
	return [e for e in l if e < x]

l = [9, 15, 14, 3, 8, 11]
x = 10
print(getSmaller(l, x))

print()

def getEvenOdd(l):
	even = [x for x in l if x%2==0]
	odd = [x for x in l if x%2!=0]
	return even, odd

even, odd = getEvenOdd(l)
print(even, odd)

print()

s = "geeksforgeeks"
l1 = [x for x in s if x in "aeiou"]
print(l1)

l2 = ["geeks", "ide", "courses", "gfg"]
l3 = [x for x in l2 if x.startswith("g")]
print(l3)

l4 = [x*2 for x in range(6)]
print(l4)

l = [x.upper() for x in l2 if x.startswith("g")]
print(l)

print()

# Set Comprehension

l = {10, 20, 3, 4, 10, 20, 7, 3}

s1 = {x for x in l if x%2==0 }
s2 = {x for x in l if x%2!=0 }  # set comprehension

print(s1)
print(s2)

print()

# Dictionary Comprehension

l1 = [1,3,4,2,5]

d1 = {x:x**3 for x in l1}
print(d1)

d2 = {x:f"ID{x}" for x in range(5)} # dictionary comprehension
print(d2)


l2 = [101,103,102]
l3 = ['gfg','ide','corse']

d3 = {l2[i]:l3[i] for i in range(len(l2)) }   # dictionary comprehension
print(d3)

print()
# we should use this
d4 = dict(zip(l2,l3))
print(d4)

print()

d1 = {101:'gfg',103:'practice',102:'ide'}

d2 = {v:k for (k,v) in d1.items() }
print(d2)



