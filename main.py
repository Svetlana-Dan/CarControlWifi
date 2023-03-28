# main.py

import time
from machine import UART
import uos

class Car:
    def __init__(self):
        self.uart = UART(0, 115200)                         
        self.uart.init(115200, bits=8, parity=None, stop=1) 
        uos.dupterm(None, 1)
    def stop(self):
        self.uart.write('s')
    def forward(self):
        self.uart.write('f')
    def backward(self):
        self.uart.write('b')
    def right(self):
        self.uart.write('r')
    def left(self):
        self.uart.write('l')
    
car = Car()
# car.forward()
# time.sleep(1)
# car.stop()
# time.sleep(1)
# car.left()
# time.sleep(1)
# car.backward()
# time.sleep(1)
# car.right()
# time.sleep(1)
