#ternary operator

#by using (X if condition else Y)


num = 104
a=12
b=65
age = 22
temp= 50

user_role = "ADMIN"
# print("positive" if num > 0 else "negative")

# result=( "Even " if num%2==0 else "Odd")
# print (result)

# max_num =  a if a > b else b
# print (max_num)
# min_num =  a if a < b else b
# print (min_num)

# age_status = "Adult" if age > 35 else "chota"
# print (age_status)

# temp_status = "Too Hot" if temp >9 else "Relax " 
# print (temp_status)

access= "full access" if user_role == "ADMIN" else "limited access"
print(access)
