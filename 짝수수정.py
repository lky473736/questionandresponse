num = int(input("Input a number : "))
summation = 0 
i = 0

if num % 2 == 0 and num > 0 : # num이 짝수라면
    evenpcs = int(num / 2) # evenpcs (짝수의 갯수)는 갯수에 2 나눈 값
    
    while i < evenpcs :
        summation = summation + 2 * (i + 1)
        i = i + 1
        
    print ("final sum = ", summation)
    
elif num % 2 != 0 and num > 0 : # num이 홀수라면
    evenpcs = int((num - 1) / 2) # evenpcs는 갯수 하나 빼고 2 나눈 값 -> 왜냐면 홀수니깐
    
    while i < evenpcs :
        summation = summation + 2 * (i + 1)
        i = i + 1
        
    print ("final sum = ", summation)
    
else :
    quit
