# P= float(input("Enter the  initial principle amount :"))
# R= float(input("Enter thr rate of interest :"))
# N= float(input("Enter the Number of times interest is compounded per year :"))
# T=float(input("Enter the number of time period elapsed  Time in years:"))
# A=P*(1+R/N)**(N*T)
# print(f"The final amount after compounder in {T} years is {A:.0f}")


# "calulator with while loop"

# principle = 0
# rate = 0 
# time = 0 
# while principle <= 0:
#     principle = float(input ( "Enter the principel amount "))
#     if principle <= 0:
#         print("Plzz enterr a valid input ")
# while rate <= 0:
#     rate = float(input ( "Enter the rate amount "))
#     if rate <= 0:
#         print("Plzz enterr a valid input ")
# while time <= 0:
#     time = int(input ( "Enter the years amount "))
#     if time <= 0:
#         print("Plzz enterr a valid input ")
# total = principle * pow(( 1+ rate/time),time) #how to use power with pow sign 
# print(f"The final amount after compounder in {time} years is {total:.1f}")



#By using true?false and break for number equal to zero 

principle = 0
rate = 0 
time = 0 
while True:
    principle = float(input ( "Enter the principel amount "))
    if principle < 0:
        print("Plzz enterr a valid input ")
    else:
        break
while True:
    rate = float(input ( "Enter the rate amount "))
    if rate < 0:
        print("Plzz enterr a valid input ")
    else:
        break
while True:
    time = int(input ( "Enter the years amount "))
    if time < 0:
        print("Plzz enterr a valid input ")
    else:
        break
total = principle * pow(( 1+ rate/100),time) #how to use power with pow sign 
print(f"The final amount after compounder in {time} years is {total:.1f}")

