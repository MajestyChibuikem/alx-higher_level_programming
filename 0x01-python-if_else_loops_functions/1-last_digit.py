#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
cntp = 0
if number < 0:
    number *= -1
    cntp *= -1
lastd = number % 10
if cntp == 1:
    number *= -1
    lastd *= -1
print("Last digit of {:d} is {:d}".format(number, lastd), end="")
if lastd > 5:
    print("and is greater than 5")
elif lastd == 0:
    print("and is 0")
else:
    print("and is less than 6 and not 0")
