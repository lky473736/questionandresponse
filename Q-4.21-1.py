grades = []

for i in range (5) :
    score = int(input("Put the score : "))
    grades.append(score)
    
    if (0 <= score <= 100) == False :
        print ("Scale is not acceptable")
        quit
    
grades.sort()

grades.remove(grades[0])
grades.remove(grades[-1])

average = sum(grades) / len(grades)

print ("Average grade : {:.2f}" .format(average))