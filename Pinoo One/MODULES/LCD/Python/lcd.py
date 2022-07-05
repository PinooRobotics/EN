from pyfirmata import Arduino, util, STRING_DATA
port='COM7'

board=Arduino(port)
data="hello"
board.send_sysex(STRING_DATA, util.str_to_two_byte_iter(data))



