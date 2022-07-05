import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
mz80 = board.digital[2] # Define the pin on which the mz80 infrared sensor is attached
mz80.mode = pyfirmata.INPUT # Define that we will read from the mz80 infrared sensor

it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(mz80.read())  #Read sensor value
    mz80state = mz80.read() # Put the value read from the mz80 infrared sensor into the mz80 state variable
    if mz80state == 0: # If the mz80 state variable is 0 we run the following code
        print("There is a barrier") #print there is a barrier to the console