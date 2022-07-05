import serial #Include the required libraries
data=serial.Serial('COM3',9600) # Define the port where our card is inserted
while True: #Start an infinite loop
    x=data.readline() # Create a variable called x and transfer the value read from distance sensor into this variable.
    print(str(x.decode().strip()))#Convert the value we read into a string and print it to the console.
    data2=int(x.decode().strip())# Convert the value we read into an integer and transfer it into the variable named data2.
    if data2 < 10: # If the data2 variable is less than 10, we run the code in the bottom two lines.
        print("There is a barrier")# print there is a barrier to the console
        data.write(b'H') #send the H command to the card
    else: # If the condition inside the if block is not met, we run the code in the bottom line.
        data.write(b'L') # send the L command to the card



