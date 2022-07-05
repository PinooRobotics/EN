import pyfirmata   #Include the required libraries
import time  #Include the required libraries
board = pyfirmata.Arduino('COM5') # Define the port where our card is inserted
pir = board.digital[2]  # Define the pin on which the motion sensor is attached
pir.mode = pyfirmata.INPUT #Define that we will read from the motion sensor

it = pyfirmata.util.Iterator(board)  #define iterator
it.start() #To get the input data, the iterator is started

while True: #Start an infinite loop
    time.sleep(1)  # Wait 1 second
    print(board.digital[2].read()) #print the value we read from our motion sensor to the console.
    pirstate = pir.read() # create a variable called pirstate and transfer the value we read from our motion sensor into this variable.
    if pirstate == 1: #if  read the value 1 from our motion sensor, we run the code in the bottom line
        print("There is mobility!") #To console, There's mobility! print

