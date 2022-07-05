import serial #Include the required libraries
data=serial.Serial('COM3',9600)  # Define the port where our card is inserted
while True: #Start an infinite loop
    x=data.readline() #create a variable called x and transfer the value we read from our dht11 sensor into this variable.
    print(str(x.decode().strip())) #convert the value we read into a string and print it to the console.
    data1=float(x.decode().strip()) #create a variable named data1 and convert the value we read to float and pass it into this variable.
    if data1 > 29: #If the value read is greater than 29, we run the code in the bottom two lines.
        print("Hot") #printing Hot to console
        data.write(b'H')  #send High value to our card
    else: #If the condition in the if code is not met, make the following two lines
        print("Cold")  #printing Cold to console
        data.write(b'L') #send Low value to our card



