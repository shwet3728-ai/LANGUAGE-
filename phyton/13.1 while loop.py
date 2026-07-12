# 1. Print numbers from 1 to 10.

# n=0
# while n < 10:
#     n= n+1
    
#     print(n)

# 2. Print numbers from 1 to 20.n=0
# n=0
# while n < 20:
#     n= n+1
    
#     print(n ,end = " ")

# 3. Print numbers from 10 to 1.

# n=10
# while n >= 1 :
#     print(n)
#     n= n-1
    

# 4. Print even numbers from 1 to 20.

# n=1
# while n < 20:
#     if n % 2 == 0:
        
#         print(n)
#     n= n+ 1
   
#    5. Print odd numbers from 1 to 20.

# n=1 
# while n < 20:
#     if n % 2 != 0:
#         print(n)
#     n=n+1


# or

# n=0

# while n<= 10:
#     n=n+1
#     print(n,end= " ")
#     n= n+1


# 6. Print multiples of 5 from 1 to 50.

# n=1
# while n <= 50:
#     if n % 5 ==0:
#         print(n)
#     n= n+1

# 7. Print the multiplication table of 5.

# n= 1
# m= 5
# x=0

# while n <= 50 :
#     if n % 5 ==0:
#         x= x+1      
#         print(f"{m} * {x} = {n}")
#     n= n+1
    

# 8. Take a number from the user and print its multiplication table.

# how i solved
# n=1
# k= int (input("Enter the which you want to print :"))

# x=0
# while n <= n and x< 10:
#     if n % k == 0:
#         x= x+1
#         print(f"{k} * {x} = {n}")
#     n= n+1

# # easy aproach
# k = int(input("Enter the number: "))
# x = 1
# while x <= 10:
#     print(f"{k} * {x} = {k*x}")
#     x += 1

# 9. Find the sum of numbers from 1 to 10.
# n=0
# total=0
# while n<= 10:
#     total = total +n
#     n= n+1
# print(total)


# 10. Find the sum of numbers from 1 to 100.

# n=0
# total=0
# while n<= 100:
#     total = total +n
#     n= n+1
# print(total)

# 1. Count how many digits are in a number.
# num = int(input( "Enter the number :"))
# count = 0

# while num > 0:
#     count = count + 1
#     num = num // 10

# print(count)

# in this code ony count is stored the round how much rounf is initiated and printed the round and is easy way to find total digits 

# 2. Find the sum of digits of a number.
# num = 842704294
# total = 0
# digit=0
# while num > 0 :
#     total = num % 10
#     digit = total + digit
#     num = num // 10
# print(digit)

# short one

# num = 842704294
# total = 0

# while num > 0:
#     total = total + (num % 10)
#     num = num // 10

# print(total)

# 3. Find the largest digit in a number.

# num= 2354
# largest= 0
# while num>0:
#     digit = num % 10
#     if digit > largest:
#         largest = digit
         
#     num = num // 10
# print(largest )

# or
# num=242349
# largest = 0
# while num > 0:
#     digit = num % 10

#     if digit > largest:
#         largest = digit

#     num = num // 10

# print(largest)

# 4. Reverse a number.

num=1314
num1= 0
while num >0 :


f