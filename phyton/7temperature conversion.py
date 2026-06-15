temp= float(input("ENTER THE TEMPERATURE: "))
unit = input ( "ENTER THE VALUE (C OR F) ")

if unit == "F":
    temp = ((temp -32)*5/9)
    unit = "kelvi"
    print(f"TEMPERATURE is : {round(temp)} {unit}")
elif unit == "C":
    temp = ((temp *9/5) + 32)
    unit = "celcius"
    print(f"TEMPERATURE is : {round(temp)} {unit}")
