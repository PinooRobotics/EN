import serial #Include the required libraries 
ser = serial.Serial("COM4", 9600, timeout = 1) # Define the port where our card is inserted

def retrieveData(): #Create a function called retrieveData
    ser.write(b'1') #Send the value 1 to our card
    data = ser.readline().decode('ascii') #Put the value from bluetooth into the data variable
    return data #Send the data inside the data variable to the place where call the function

while(True): # Start an infinite loop
    uInput = input("Which data send? ") #Data entry is requested from the user with the input command
    if uInput == '1': # If the data the user went to is 1
        print(retrieveData()) #Print the data returned from the function to the console
    else: #If the condition in the if code is not met, we run the code in the bottom line.
        ser.write(b'0') # Send the value 0 to bluetooth




