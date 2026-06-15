weight= float(input("Enter your weight: "))
unit= input("kilogram or pund ? (K or L): ") 
if unit == "K":
    weight = weight * 2.205
    
    unit = "LBS."
    print(f"Your weight is : {round(weight)} {unit}")
elif unit == "L":
    weight = weight /2.205
    
    unit="KGS."
    print(f"Your weight is : {round(weight)} {unit}")
else:
    print("ENTER THE VALID INPUT")
