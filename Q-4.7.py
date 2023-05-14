A_stock = 3
B_stock = 5
C_stock = 10

A_price = 1000
B_price = 2500
C_price = 3300

snack_type = input("snack_type: ")
quantity = int(input("quantity: "))

if snack_type == "A":
    if quantity > A_stock:
        print ("Sorry")
        
    else:
        print (quantity * A_price)
        
elif snack_type == "B":
    if quantity > B_stock:
        print ("Sorry")
        
    else:
        print (quantity * B_price)
        
elif snack_type == "C":
    if quantity > C_stock:
        print ("Sorry")
        
    else:
        print (quantity * C_price)