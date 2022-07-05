import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
impact = board.digital[2] # Define the pin on which the inclination and impact sensor is attached
impact.mode = pyfirmata.INPUT # Define that we will read from the inclination and impact sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started
 
while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(board.digital[2].read()) # The value read from the inclination and impact sensor is written to the console
    impactstate = impact.read() # Put the value we read from the  inclination and impact sensor into the impact state variable.
    if impactstate == 1:  # If the touch state variable is 1 we run the following code
        print("there is a inclination") # Print there is a inclination to the console

