# for j in range(3):
#     for i in range (1,10):
#         print(i,end= "") 
#     print()   

# 12345
# 2345
# 345
# 45
# 5
num= int(input("Enter how many you want to creat :"))
for i in range(0,num+1):
    for j in range (1 ,num-i):
        print(j,end=" ")
    print()


# num= int(input("Enter how many you want to creat :"))
# for i in range (0,num+1):
#     for j in range (1,num-i):
#         print(j,end=" ")
#     print()