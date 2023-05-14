list=[]
n=1

while True:
    sum=n**2
    if sum>500:
        list.append(n)
        n+=1
        break
    else :
        n+=1
        
print(list[0])