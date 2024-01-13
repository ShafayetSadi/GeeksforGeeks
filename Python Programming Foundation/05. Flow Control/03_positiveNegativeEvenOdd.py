n = int(input("Enter a number:\n"))

if n > 0:
    print("Positive", end=' ')
    if n % 2 == 0:
        print("even")  # number is +ve and even        
    else:
        print("odd")  # number is +ve and odd

elif n < 0:
    print("negative", end=" ")
    if n % 2 == 0:
        print("even")       # number is -ve and even
    else:
        print("odd")        # number is -ve and odd

else:
    print("zero")           # number is neither -ve nor +ve