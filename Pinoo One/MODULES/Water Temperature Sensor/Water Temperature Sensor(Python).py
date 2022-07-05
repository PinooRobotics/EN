import pyfirmata #Include the required libraries
import time #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
ntc = board.analog[0] #Define the pin on which the ntc sensor is attached
ntc.mode = pyfirmata.INPUT # Define that we will read from the ntc sensor
 
it = pyfirmata.util.Iterator(board) #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1) # Wait 1 second
    print(ntc.read()) # Read sensor value
    ntcstate = ntc.read() #put the value we read from the ntc sensor into the ntc state variable
    if ntcstate > 0.5:  #If the value in the ntcstate variable is greater than 0.5, the code in the bottom line will work.
        print("Sensor is Hot") # Sensor is Hot text is printed