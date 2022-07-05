import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
lm35 = board.analog[0] # Define the pin on which the lm35 heat sensor is attached
lm35.mode = pyfirmata.INPUT # Define that we will read from the lm35 heat sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(lm35.read())  #Read sensor value
    lm35state = lm35.read() # Put the value we read from the lm35 heat sensor into the lm35 state variable
    if lm35state > 0.05: #If the value in the lm35state variable is greater than 0.05, the code in the bottom line will work.
        print("Hot") # Hot text is printed