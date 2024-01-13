# Variable Length Arguments
def sum(*elements):
    # elements are tuple
    res = 0
    for x in elements:
        res = res + x
    return res

def _sum(init_sum, *elements):
    # elements are tuple
    res = init_sum
    for x in elements:
        res = res + x
    return res

def printElements(*elements):
    print(elements)

print(sum(10, 20))
print(sum(10, 20, 30))
print(sum(10))
print(sum())

print()

print(sum(0, 10, 20, 30))
print(sum(100, 10, 20, 30))

print()

printElements(101, "abc", 200)

print()
print()

# Keyword variable length arguments
def printDetails(**details):
    # details is a dictionary
    for d,v in details.items():
        print(f"{d} is {v}")
    print()

printDetails(id=102, name="abc", price=100)
printDetails(id=102, name="xyz")