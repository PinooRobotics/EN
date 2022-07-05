import pyfirmata #Include the required libraries
import time # Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
flame = board.digital[2] # Define the pin on which the flame detection sensor is attached
flame.mode = pyfirmata.INPUT # Define that we will read from the flame detection sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #  Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(flame.read()) # Read sensor value
    flamestate = flame.read() # Put the value we read from the flame sensor into the flame state variable.
    if flamestate == 1: # If the flame state variable is 1 we run the following code
        print("Flame detected") # Print Flame detected to the console