import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
gas = board.analog[0] # Put the pin on which our gas sensor is attached into the gas sensor variable.
gas.mode = pyfirmata.INPUT # Define that we will read from the gas sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(gas.read()) # Read sensor value
    gasstate = gas.read() # Put the value we read from the gas sensor into the gas state variable
    if gasstate > 0.7: #If the value in the gasstate variable is greater than 0.7, the code in the bottom line will work.
        print("Gas alarm") #Gas alarm text is printed