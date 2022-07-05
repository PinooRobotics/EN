import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
button = board.digital[2]  # Define the pin on which the button is attached
button.mode = pyfirmata.INPUT # Define that we will read from the button module

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: # Start an infinite loop
    time.sleep(1)  # Wait 1 second
    print(board.digital[2].read()) # The value read from the button is written to the console
    buttonstate = button.read() #value read from the button is assigned to the buttonstate variable
    if buttonstate == 1: # if button is pressed
        print("Button pressed") # button pressed text is printed


