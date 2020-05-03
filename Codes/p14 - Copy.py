a=[1,1,2,3,4,5,6,5,8,9]
x=[]
for i in a:
    if i not in x:
        x.append(i)

print(x)
