nums = [1,1,2]
l = []
s = ""
print("[",end="")
for i in nums:
    if(i not in l):
        l.append(i)
        s += str(i) + ","

    
print(s[:-1]+"]")