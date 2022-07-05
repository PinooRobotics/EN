import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
soil = board.analog[0] #Define the pin on which the soil sensor is attached
soil.mode = pyfirmata.INPUT #Define that we will read from the soil sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: # Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(board.analog[0].read()) #The value read from the soil sensor is written to the console
 



