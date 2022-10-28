print('''
     + ADD
     - SUB
     * MUL
     / DIV
''')
a=int(input("Enter the value 1 :"))
b=int(input("Enter the value 2 :"))
p=input("Enter operator :")
if p=="+":
    print(a+b)
elif p=="-":
    print(a-b)
elif p=="*":
    print(a*b)
elif p=="/":
    print(a/b)
else:
    print("Invalid operator....")