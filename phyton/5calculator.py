operators =input ("Enter an operator ( +,- ,* ,/, %):")
num1= float (input("Enter the 1st number: "))
num2= float (input("Enter the 2st number: "))
if operators == "+":
    result = num1 + num2
    print(result)
elif operators == "-":
    result = num1 - num2
    print(result)
elif operators == "/":
    result = num1 / num2
    print(result)
elif operators == "*":
    result = num1 * num2
    print(result)
elif operators == "%":
    result = num1 % num2
    print(result)
else :
    print ( "Enter a the valid operator ")