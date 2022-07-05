import pyfirmata #Include the required libraries
import time #Include the required libraries

board = pyfirmata.Arduino('COM3')  # Define the port where our card is inserted

while True:  #Start an infinite loop
    board.digital[2].write(1) #turn the relay on
    time.sleep(1) # Wait 1 second
    board.digital[2].write(0) #turn the relay off
    time.sleep(1) # Wait 1 second
