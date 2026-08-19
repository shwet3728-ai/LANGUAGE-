# *
# **
# ***
# ****
# *****
# num=6
# for i in range(1,num+1):
#     for j in range (i,num):
#         print(j,end=" ")
#     print()
#   . Find the largest digit in a number.

# num=input("Enter the number :")
# largest = 0
# for i in str(num):
#     if int(i) > largest :
#         largest = int(i)
# print (largest)


# find the smallest number 


# num= int(input("Enter the number : "))
# smallest = 0
# for i in str(num):
#     if int(i) < smallest :
#         smallest = int(i)
#     print(smallest)


a=  int(input("Enter the age "))
if a<= 10:
    print("The price of ticket is 60")
elif a>= 60:
    print("the price is 120")
else:
    print("the price is 200")