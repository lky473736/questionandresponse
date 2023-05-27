# https://pillow.readthedocs.io/en/stable/

from tkinter import *
from PIL import ImageTk, Image

window = Tk()

img = ImageTk.PhotoImage(Image.open("/Users/alphastation/Desktop/question and response/moraedooji_ice.gif"))  
l = Label(image = img)
l.pack()

window.mainloop()