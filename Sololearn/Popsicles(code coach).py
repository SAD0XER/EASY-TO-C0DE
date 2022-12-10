"""
----------------------
    __Popsicles__
----------------------
    
# Problem:
You have a box of popsicles and you want to give them all away to a group of brothers and sisters. If you have enough left in the box to give them each an even amount you should go for it! If not, they will fight over them, and you should eat them yourself later.

# Task:
Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.

# Input Format:
Two integer values, the first one represents the number of siblings, and the second one represents the number of popsicles that you have left in the box.

# Output Format:
A string that says 'Give away !' if you are giving them away, or 'Eat them yourself.' if you will be eating them yourself.
______________________
# Sample Input:
3 9

# Sample Output:
Give away !
____________________________________________
# Explanation:
You can give the popsicles to the brothers and sisters because they would each get the same amount, 3.
----------------------
"""

# Taking input from user.
 
siblings = int(input()) #sibilings meams group of brother and sisters.

popsicles = int(input())
# popsicles means in-short chocolates.

# Calculation.
item = popsicles % siblings 

# Checking an condition.
if (item == 0):
  print("Give away !")

elif (~(item == 0)):
  print("Eat them yourself.")

#⚠️ NOTE: You can use "not" keyword in the "elif" statememt too (Line 13).⚠️