num =int(input("Enter a number: "))

div =[]

l =(range(1,num+1))

for x in l:
    if num%x==0:
        div.append(x)

print(div)        
        
