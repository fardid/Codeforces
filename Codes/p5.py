a=[4,3,4,2,1,3,5]
b=[2,3,45,322,34,21,3,21,9,4]
c=[]
for item in a:
   if item in b:
       if item not in c:
             c.append(item)
       
  

print (c)

