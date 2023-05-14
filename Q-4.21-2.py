n = int(input("Input the length of roster : "))
signcount = 0
roster = []

while len(roster) < n : 
    mode = input("command : ")
    
    if mode == 'sign' :
        signcount += 1
        name = input("name : ")
        
        if signcount >= 2 : 
            for i in range (len(roster)) : 
                if roster[i] == name : 
                    print ("Wrong player name!") # 이름 같은거 입력했으면 처음부터 다시 (그동안 썼던 이름 지워짐)
                    roster.clear()
                    exit
                    
                else : 
                    pass
            
        roster.append(name)
    
    if mode == 'done' : 
        break

roster.sort()
print(roster)