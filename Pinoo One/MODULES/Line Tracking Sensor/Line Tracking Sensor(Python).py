import pyfirmata  #Include the required libraries
import time  #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
line = board.analog[3] # Define the pin on which the line tracking sensor is attached
line.mode = pyfirmata.INPUT # Define that we will read from the line tracking sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True:  #Start an infinite loop
    time.sleep(1)  # Wait 1 second
    print(board.analog[3].read())  # The value read from the line tracking sensor is written to the console



