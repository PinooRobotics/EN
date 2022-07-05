import pyfirmata #Include the required libraries
import time #Include the required libraries

board = pyfirmata.Arduino('COM5')  #Define the port where our card is inserted
pin = board.get_pin('d:2:s') #Set pin D2 as Servo Output

while True: #Start an infinite loop
    pin.write(0) #set our servo to 0 angles
    time.sleep(1) # Wait 1 second
    pin.write(180) #set our servo to 180 angles
    time.sleep(1) # Wait 1 second


