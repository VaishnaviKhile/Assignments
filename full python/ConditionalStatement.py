# if statement
# if else statement
# if elif else statement
from doctest import ELLIPSIS_MARKER


a=int(input("enter the value :"))
if a%2==0:
    print(a," is even no.")
    print("welcome to our world")
else:
    print(a," is odd no.")
per=int(input("Enter the no.: "))
if per>=60:
    print("First Div")
elif per>=48:
    print("Second Div")
elif per>=35:
    print("Third Div")
else:
    print("fail")
