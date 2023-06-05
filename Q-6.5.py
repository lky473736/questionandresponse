from tkinter import * # tkinter에서 모든 것을 import
window = Tk()

def changeimg () :
    k = entry.get() # entry에서 문자열을 get하여 k에 저장 (항상 기억해야 할 것 : get에서 들여오는 값은 항상 문자열)
    img = PhotoImage (file = k) # k라는 경로에 있는 file을 image로 지정하여 img에 저장
    imagelabel.configure (image = img) # 기존의 imagelabel에 있었던 image를 img로 바꾼다고 선언
    imagelabel.image = img # 위에 선언해준 걸 시행시킴
    
rabbit = PhotoImage (file = "/Users/alphastation/Desktop/컴퓨터공학전공/repository/learningpython/img/rabbit.GIF") 
imagelabel = Label (window, image = rabbit) # label 매소드 통해서 image 넣기
imagelabel.pack()

text = Label (window, text = "아래에 경로 입력") # 여기서 입력한 경로가 changeimg()에서 entry.get됨
text.pack()

entry = Entry (window, bg = "lightgray", fg = "white")
entry.pack()

button = Button (window, text = "submit", command = changeimg)
button.pack()

window.mainloop()
