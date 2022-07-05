import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5')  # Define the port where our card is inserted
switch = board.digital[2]  #Define the pin on which the switch sensor is attached
switch.mode = pyfirmata.INPUT # Define that we will read from the switch

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True:  #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(switch.read()) # Read sensor value
    switchstate = switch.read()  # Put the value we read from theswitch into the switch state variable.
    if switchstate == 1: # If the switch state variable is 1 we run the following code
        print("Button pressed") # Button pressed text is printed