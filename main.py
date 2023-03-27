# main.py

import time
import machine
import uos

class Car:
    def __init__(self):
        self.uart = UART(0, 115200)                         
        self.uart.init(115200, bits=8, parity=None, stop=1) 
        uos.dupterm(None, 1)
    def stay(self):
        self.uart.write('s')
    def go(self):
        self.uart.write('f')
    def ago(self):
        self.uart.write('b')
    def rotr(self):
        self.uart.write('r')
    def rotl(self):
        self.uart.write('l')
    
car = Car()
car.go()
time.sleep(1)
car.stay()
time.sleep(1)
car.rotl()
time.sleep(1)
car.ago()
time.sleep(1)
car.rotr()
time.sleep(1)
