import serial #Include the required libraries
data=serial.Serial('COM3',9600)  # Define the port where our card is inserted
while True: #Start an infinite loop
    x=data.readline() # Read from our card and put the value we read into the variable x
    print(str(x.decode().strip())) #Convert the value we read into a string and print it.




