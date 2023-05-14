# sum the even numbers

num = int(input("Input a number : "))
summation = 0

if num % 2 == 0 and num > 0 : # num이 짝수라면
    evenpcs = int(num / 2) # evenpcs (짝수의 갯수)는 갯수에 2 나눈 값
    
    for i in range (evenpcs) :
        print (2 * (i + 1))
        summation = summation + 2 * (i + 1)
        
    print ("final sum = ", summation)
elif num % 2 != 0 and num > 0 : # num이 홀수라면
    evenpcs = int((num - 1) / 2) # evenpcs는 갯수 하나 빼고 2 나눈 값 -> 왜냐면 홀수니깐
    
    for i in range (evenpcs) :
        print (2 * (i + 1))
        summation = summation + 2 * (i + 1)
        
    print ("final sum = ", summation)
    
else :
    quit
