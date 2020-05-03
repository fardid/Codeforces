a,b=0,1
x=[]
for i in range(10):
    a,b=b,a+b
    x.append(b)

print(x)    
