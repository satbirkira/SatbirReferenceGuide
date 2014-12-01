import re
import codecs
import os
import sys
import datetime
import subprocess
import time

def printHi():
	print ("Hi")

x = 2


#list.append(x) add element
#list.extend(L) add L to list
#list.insert(i, x) insert x at [i]
#list.remove(x)
#list.count(x) count how many times x appears
#list.sort()
#list.reverse()
#list.pop([i]) remove i-th
#list.pop() remove last

thisFillList = []
thisFillList.append("Hi")
thisFillList.extend(["Bye"])

for greeting in thisFillList:
	print("The greeting is " + greeting)

for i in range(len(thisFillList)):
	print("The greeting is " + thisFillList[i])

if(x == 2):
	try:
		print("2!")
	except:
		sys.exit(1)

exit_menu = False
while (exit_menu != True):
	user_says = int(input("Press 0 to exit: "))
	if (user_says == 0):
		exit_menu = True
	elif (user_says == 1):
		print("No you dummy")
