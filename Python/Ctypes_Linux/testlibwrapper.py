import ctypes
import os

def fib(n):
	if n<0:
		print("Incorrect input")
	# First Fibonacci number is 0
	elif n==0:
		return 0
	# Second Fibonacci number is 1
	elif n==1:
		return 1
	else:
		return fib(n-1)+fib(n-2)

# load so (shared object)
testlib = ctypes.CDLL(os.path.dirname(__file__)+"/testlib.so")
testlib.myprint()
print(testlib.add(10,10))

# test it
n = 36
print("=== Fibo ctypes")
print(testlib.fib(n))
print("=== Fibo python")
print(fib(n))