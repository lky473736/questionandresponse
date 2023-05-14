import math

list1 = []

def main():
    while True:
        inputString = input("정수 리스트 입력 (그만 입력하려면 'stop' 입력): ")
        
        if inputString == 'stop':
            break
        
        inputString = int(inputString)
        list1.append(inputString)
    
def getMean(x):
    return sum(x) / len(x)
    
def getDeviation(x):
    return math.sqrt(x)

main()

mean = getMean(list1)

vsum = 0

for val in list1:
    vsum += (val - mean)**2
    
variance = vsum / len(list1)

deviation = getDeviation(variance)

print("평균 : ", mean)
print("표준편차 : ", deviation)
