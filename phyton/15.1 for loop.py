#Print numbers from 1 to 10.

# for i in range (1,11):
#     print(i)

#Print numbers from 10 to 1.

# for i in reversed(range (1,11)):
#     print(i)

#Print even numbers from 1 to 20.

# for i in range (2,20,2):
#     print(i)

# Print odd numbers from 1 to 20.

# for i in range (1,20,2):
#     print(i)

#Print all multiples of 5 from 1 to 50.

# for i in range (5,50,5):
#     print(i)

#Print all multiples of 5 from 1 to 50.

# k=int(input("Enter the number to get the muntiples :"))

# for i in range(1,16):
#     print(f"{k} * {i} = {k*i}")


#this is like if i want to keep the limit of the table 
 
# k = int (input ("Enter the number to get the munltiples :"))
# limit = int (input ("Enter the number to get the munltiples upto the certain limit  :"))
# for i in range (1 ,limit + 1):

#     print(f"{k} * {i} = {k*i}")


# Find the sum of numbers from 1 to 10.
# k=0
# for i in range(1,100):
#     k= k+i
# print(k)

#11. Find the sum of all even numbers from 1 to 50.
# k=0
# for i in range (0,51,2):
    
#     k=k+i
# print(k)

#12. Count how many numbers are there from 1 to 20 using a for loop.
# k= 0
# for i in range ( 1,21):
#     k=k+1
# print(k)

# 13. Print each character of a string.
# k= "shwet"
# for i in k:
#     print(i)

# k = "shwet"

# for i in range(len(k)):
#     print(k[i])

# 14. Count the number of characters in a string using a for loop.

# k = "jfnaeiufnwoi"
# count=0
# for i in k:
#     count= count + 1
# print(count)

# 15. Count the number of vowels in a string.
# name= "shwet AnandE"
# vowels= ["A","E","I","O","U","a","e","i","o","u"]
# count=0
# for i in name:
#     if i in vowels:
#         count = count +1
# print(count)

# 16. Print the square of numbers from 1 to 10.

# for i in range (1,11):
    
#     print(i*i)
#     # or
#     print(i**2)

# 17. Print the cube of numbers from 1 to 10.

# for i in range (1,11):
#     print(i*i*i)
#     # or
#     print(i**3)

# 18. Print the first 10 natural numbers along with their squares.
# count=0
# for i in range (1 , 11):

#     count = count +1
#     print(f"{count}. {i**2}")

# or

# for i in range (1 , 11):
#     print(f"{i}. {i**2}")

# # 19. Print the pattern:
# # *
# # **
# # ***
# # ****
# # *****


# num= int(input("Enter the number of rows :"))
# for i in range (1,num+1):
#     for j in range(1,i+1):
#         print("*",end="")
#     print()
    

# 20. Print the pattern:
# 1
# 12
# 123
# 1234
# 12345

num= int(input("Enter the number of rows :"))
for i in range (1,num+1):
    for j in range( 1,i+1):
        print(j,end="")
    print()


# 1. Print the pattern:
# 12345
# 1234
# 123
# 12
# 1

# num= int(input("Enter how many you want to creat :"))
# for i in range (0,num+1):
#     for j in range (1,num-i):
#         print(j,end=" ")
#     print()

# 1. Print the pattern:
# *****
# ****
# ***
# **
# *

# num= int(input("Enter how many you want to creat :"))
# for i in range (0,num+1):
#     for j in range (1,num-i):
#         print("*",end="")
# 
#    print()

# 1. Find the factorial of a given number.

# n = int(input("Enter number: "))
# factorial = 1

# for i in range(1, n + 1):
#     factorial = factorial * i
# print(factorial)

# 3. Count how many digits are in a number.
# num=input("Enter the number :")
# num1 = 0
# for i in str (num):
#         num1 = num1 + 1
# print(num1)


# 4. Find the sum of digits of a number.
# n =1212
# n1= 0
# for i in str(n):
#     n1= n1+int(i)
# print(n1)


# n = 1212
# total = 0

# for i in str(n):
#     total = total + int(i)

# print(total)

# 5. Print all numbers from 1 to 100 that are divisible by both 3 and 5.

# for i in range (1,101):
#     if i%3==0 and i%5==0 :
#         print(i)

# 6. Find the largest digit in a number.
# num=input("Enter the number :")
# largest = 0
# for i in str(num):
#     if int(i) > largest :
#         largest = int(i)
# print (largest)



# # 7. Print the ASCII value of each character in a string.
# num1 = " "
# for i in range(ord("A")):
#     num1 = int(i)
#     print(num1)

# for single character
# num = input("Enter the character :")
# print(ord(num))

# for a word and character

# num = input("Enter the character :")
# num1= ":"
# for i in num:
#     print(i , ord(i))


# 8. Print numbers from 1 to 50, replacing multiples of 3 with "c", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".

# for i in range (1,51):
#     if i % 3 == 0 and i% 5 == 0:
#         print("FizzBuzz")
#     elif i % 5 == 0:
#         print("Buzz")
#     elif i % 3 == 0:
#         print("c")
#     else:
#         print(i)


# 0
# 1 0
# 010
# 1010
# 01010


# num= int(input("Enter the number of rows :"))
# for i in range (1,num+1):
#     for j in range(1,i+1):
#         print("*",end="")
#     print()