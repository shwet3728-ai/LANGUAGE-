# logical operators = evaluate multiple conditions (or, and, not) 
# or = at least one condition must be True 
# and = both conditions must be True 
# not = inverts the condition (not False, not  True)

# temp = 25
# is_raining = False
# if temp > 35  or temp < 0 or is_raining:
#     print("the outdore event is cancalled")
# else:
#     print("The outdoor event is still calcled ")

# temp = 25
# is_raining = True
# if temp >10  and temp < 10 and is_raining:
#     print("the outdore event is cancalled")
# else:
#     print("The outdoor event is still calcled ")


temp = 25
is_raining = True
if temp >10  and not temp < 10 and not is_raining:
    print("the outdore event is cancalled")
else:
    print("The outdoor event is still calcled ")