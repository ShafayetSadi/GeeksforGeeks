# txt = input("Enter Text:\n")
# pat = input("Enter Pattern:\n")

txt = "geeks for geeks"
pat = "geeks"

pos = txt.find(pat)
while pos>=0:
    print(pos)
    pos = txt.find(pat,pos+1)