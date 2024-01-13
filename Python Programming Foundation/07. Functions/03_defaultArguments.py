def printDetails(id, name="NA", price="NA"):
    print(f"Id is {id}")
    print(f"Name is {name}")
    print(f"Price is {price}")

# passing parameters by positional-arguments
printDetails(101, "abc", 100)   # passing all three param
print()
printDetails(102)               # passing only 1st param
print()
printDetails(103, "xyz")        # passing only first two param

# passing parameters by keyword-arguments
printDetails(id=101, name="abc")   # passing name and id by keyword-arg
print()
# passing parameters by keyword-arguments, not in order
printDetails(price=200, id=102)   # passing price and id by keyword-arg
print()
printDetails(id=103)                # passing id by keyword-arg
