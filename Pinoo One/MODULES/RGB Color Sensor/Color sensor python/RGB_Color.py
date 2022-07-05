import serial #Include the required libraries
data=serial.Serial('COM5',9600)  # Define the port where our card is inserted
while True:  #Start an infinite loop
    x=data.readline() #are reading from the port we inserted
    print(str(x.decode().strip())) #convert the data we read into a string and print it.





