import pyfirmata  #Include the required libraries
import time  #Include the required libraries

board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted

while True:  #Start an infinite loop
    board.digital[5].write(1) # Start the motor on the right
    board.digital[6].write(0) # Start the motor on the right
    time.sleep(1) # Wait 1 second
    board.digital[5].write(0) # Start the motor on the left
    board.digital[6].write(1) # Start the motor on the left
    time.sleep(1) # Wait 1 second


