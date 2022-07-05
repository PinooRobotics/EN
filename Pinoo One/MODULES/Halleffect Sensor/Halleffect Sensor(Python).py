import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
hall = board.digital[2] # Define the pin on which the hallefect sensor is attached
hall.mode = pyfirmata.INPUT # Define that we will read from the hallefect sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(hall.read()) #Read sensor value
    hallstate = hall.read() # Put the value read from the hallefect sensor into the hall state variable
    if hallstate == 0: # If the hall state variable is 0 we run the following code
        print("You are in a magnetic field ") # You are in a magnetic field text is printed