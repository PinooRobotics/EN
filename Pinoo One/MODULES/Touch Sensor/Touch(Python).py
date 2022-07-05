import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5')  # Define the port where our card is inserted
touch = board.digital[2] # Put the pin on which our touch sensor is attached into the touch variable.
touch.mode = pyfirmata.INPUT  # Define that we will read from the touch sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(touch.read()) # Read sensor value
    touchstate = touch.read() # Put the value we read from the touch sensor into the touch state variable.
    if touchstate== 1: # If the touch state variable is 1 we run the following code
        print("Touch pressed")  # Touch pressed text is printed