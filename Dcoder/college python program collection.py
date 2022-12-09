"""
#python 3.7.1
# Here, you will get all the programs of python.

#---------------------------------------
# 1st. simple program of addition of two numbers.

# variable declaration.
Num1 = 1.2
Num2 = 6.3
# calculation
sum = Num1 + Num2
# displaying the sum.
print("the addition of two number is ",sum)

#---------------------------------------
#2nd. program to add two numbers with user input.

# taking input From user.
N1 = float(input('Enter the value of 1st number: '))
N2 = float(input('Enter the value of 2nd number: '))
# calculation.
ADD =N1 + N2
# displaying sum.
print("The addition of your two number is {0}".format(ADD))

#---------------------------------------
# 3rd. Conversion of fahrenheit to Celsius.
'''
formulas of temperature.
1) fahrenheit = (celsius * 1.8) + 32
2) celsius * 1.8 = fahrenheit - 32
'''
celsius = float(input('Enter the value in celsius: '))
fahrenheit = (celsius * 1.8) + 32
print("The conversion of celsius to fahrenheit is {0}c. ".format(fahrenheit))

#---------------------------------------
#  4rd. area of the rectangle

l = float(input('enter the length: '))
b = float(input ('enter the breadth: ') )
rec = l * b
print("area of the rectangle:"rec)

#---------------------------------------
# 5th. area of the square

side = float(input('enter the side of square length: '))
square = 4 * side
print("area of the square is ",square)

#---------------------------------------
# 6th. convert kilometer to meters.

km = float(input('Enter the value of kilometer: '))
meter = km * 1000
print("the conversion of kilometer to meter is ",meter)
#---------------------------------------
# 7th. Program to convert kilometer to mile.

print("Enter how many km ?")
km = float(input ())
miles = km * 1.60934
print ("{0} km is in {1} miles \n".format(km,miles))

#------------------OR--------------------#

#8th. Program to convert mile to kilometer.

print("Enter how many Miles ?")
miles = float(input ())
km = miles * 0.621371
print ("{0} miles is in {1} km".format(miles,km))

#------------------------------------------

# 9th. program to find given number is Even or Odd.
num = int (input ("Enter Number."))
if (num % 2 == 0) :
  print ("this is an Even number.")
else:
  print ("this is an Odd number.")
 
#----------------------------------------#
# 10th. program of 'if...else' statement .

marks = float (input ('please Enter your Marks: '))

if (marks > 85):
  print("you got \'A\' Grade.")

elif ((marks > 70) & (marks <= 85)):
  print("you got \'B\' Grade.")

elif ((marks > 60) & (marks <= 70)):
  print("you got \'C\' Grade.")

elif ((marks > 45) & (marks <= 60)):
  print("you got \'C\' Grade.")
  
elif ((marks > 0) and (marks <= 45)):
  print("you are awesome student.")

#----------------|| OR ||-------------------#

# 11th. this program is a example of Nested loop

percentage = float (input ("please Enter your percentage: "))

if (percentage > 85):
    print("you got \'A\' Grade.")
else:
    if ((percentage > 70) & (percentage <= 85)):
      print("you got \'B\' Grade.")
    elif ((percentage > 60) & (percentage <= 70 )):
        print("you got \'C\' Grade.")
    elif ((percentage > 45) & (percentage <= 60)):
        print ("you got \'D\' grade.")
    else:
      print ("you are Fail.")
"""
#-------------------------------------------#
"""
SPECIAL OPERATORs :- "is" AND "is not"

12th. Example of 'is' and 'is not' operator.


x = 5 # same values assigning
y = 5
print (x is not y) #false
print (x is y) #true
xx = 'hello'
yy = 'hello'
print (xx is yy) #true
print (xx is not yy) #false

xxx = [ 1,2,3,4,5 ]
yyy = [ 1,2,3,4,5 ]
print (xxx is yyy) #false
print (xxx is not yyy) #true
print ('new')
i = 23
j = 7
a1 = ( 's','sad', i + 3j)
b1 = ( 's','sad', i + 3j)
print ( a1 is b1 )
print ( a1 is not  b1 )

a2 = { 1 : "decoder" , 3 : "dcoder" }
b2 = { 1 : "decoder" , 3 : "dcoder" }
print ( a2 is b2 )
print ( a2 is not b2 )

#-------------------------------------------#
#16th. write a program to find the sum of Even numbers up to 50.

# n = int(input('Enter the value of \'n\': '))

# initialization
i = 1
sum = 0
while (i <= 50):
  if (i % 2 == 0):
    sum += i
  i += 1 #counter
print ("the addition of even number is", sum)

#-------------------------------------------#
#17th. write a program to find the sum of Odd numbers up to 100.
# initialization
i = 1
sum = 0
while (i <= 100):
  if (i % 2 != 0):just
    sum += i
  i += 1 #counter
print ("the addition of odd number is", sum)


#--------------------FOR LOOP------------------------#
#18th. pro type 1.
# find the sum of all numberss stored in the list.
num = [6,5,3,4,456,5,5,789,89,456,32,7,46]
sum = 0
for var in num:
  sum += var
print("the sum is ",sum)

#---------range() function:---------------------------#
#19th. pro type 2.
# Illustration of for loop with else.
# range() function starts with 0 (zero).
# range(6) == for(i=0,i<6,i++)
print (list(range(10))) # 0 to 9
print (list(range(10,20)}) # 10 to 19
print (list(range(2,10,2))) # 2,4,6,8 (START, END, STEP_SIZE)

#---------FOR LOOP WITH range() function:---------------------------#
#20th. pro type 3
# initialization
sum = 0
for helper in range(0,21,2):
  sum += helper
print ("the addition of even number is", sum)

'''# initialization
sum = 0
for a in range(0,21,2):
  #if (i % 2 == 0):
  sum += a
  #i += 1 #counter
print ("the addition of even number is", sum)
'''
#------------FOR LOOP WITH else--------------#
#21th. Illustration of for loop with else.
badigits = [ 3,45,5 ]
for sad in badigits:
  print (sad)
else:
  print("this is else: line.")


#--------------------------------------------#
#22th. program to print even number using for loop. 
s = int(input('enter starting point number: '))
e = int(input('enter end point number: '))
for even in range(s,e+1):
  if (even % 2 == 0 ):
    print(even)
'''if you want a print odd number
then '==' replace with '!=' oparator.'''


#---------------------------------------------#
#23th. program to print even number using while loop.

s = int(input('enter starting point number: '))
e = int(input('enter end point number: '))
e += 1
while s < e:
  if s % 2 == 0 :
    print (s)
  s += 1                #increment\counter
  
'''if you want a print odd number
then '==' replace with '!=' oparator.'''


#------------------------------------------------#
#23th. program to find factorial number of given number.

N = int(input('Enter the number: '))

if (N < 0):
  print("factorial of negative is not exist.")

elif (N == 1):
  print("the factorial of 1 is 1.")

elif (N == 0):
  print("the factorial of 0 is 1.")

else:
  fact = 1
  while (N > 0):
    fact = fact * N
    N = N - 1
  print("Factorial = ",fact)


#------------------------------------------------#
#24th. program to find FIBONACCI SERIES of given number.

num = int (input("Enter that you want to find fibonacci sriese."))
num1 = 0
num2 = 1
inc = 0
while (inc < num):

'''# THIS IS DIRECTLY COPIED PROGRAM.
#0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
# Program to display the Fibonacci sequence up to n-th term
nterms = int(input("How many terms? "))
# first two terms
n1, n2 = 0, 1
count = 0
# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
# if there is only one term, return n1
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
# generate fibonacci sequence
else:
   print("Fibonacci sequence:")
   while count < nterms:
       print(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
'''
#--------------------------------------------#
#25th. program to swap two numbers.

n1 = int (input ("enter the 1st number: "))
n2 = int (input ("enter the 2nd number: "))

print ("Number before swapping are:\n{0}\n{1}".format(n1,n2))
  
t = n1
n1 = n2
n2 = t

print("Number after swapping are:\n{0}\n{1}".format(n1,n2))
  

#-------------------------------------------------------#
# 26th.
# u1||assignment question.
#
name = str(input("Enter your name: "))
age = int(input ("Enter your age: "))
print("Your name is {0} and your age is {1}.\n and you after {2} years, you will become 100 year old.".format(name,age,(100-age)))


#______-____________________________________________-_____________#
#27th. Write a program to accept a number from the user and count its number of divisors.
NUM = int(input("Enter the number: "))
i = 1
print("All the divisor of number %d is",NUM)
while ( i <= NUM ):
  temp = NUM % i
  if (temp == 0):
    print(i)
  i += 1

#______________-________________-__________________________#
#28th. Write a python program to print factorial of a number. Take input from user?

num = int(input("Enter the number: "))
fact = 1
while (num > 0):
  fact *= num
  num -= 1
print(fact)
'''
fact = 1
  while (N > 0):
    fact = fact * N
    N = N - 1
    print("Factorial = ",fact))
'''

#______________-________________-__________________________#
#29th. Write a python program to calculate area of triangle and circle and print the result.Take input from user.
PI = 3.14
rad = float(input("Enter the value of Radius: "))
C = PI * rad ** 2 
print ("Area of Circle is %4.2f.",C)


#______________-________________-__________________________#
#30th.Find the max number from given two numbers.

# Taking an input
n1 = int(input("Enter the 1st. number: "))
n2 = int(input("Enter the 2nd. number: "))

# checking
if (n1 > n2) :
  print (n1,"is max Number.")
elif (n1 == n2):
  print ("Both numbers are equal.")
else:
  print (n2,"is max Number.")

#______________-________________-__________________________#
#31th. Find the mini number from given two numbers.

# Taking an input
n1 = int(input("Enter the 1st. number: "))
n2 = int(input("Enter the 2nd. number: "))

# checking
if (n1 < n2) :
  print (n1,"is minimal Number.")
elif (n1 == n2):
  print ("Both numbers are equal.")
else:
  print (n2,"is minimal Number.")

#______________-________________-_____________________________#
#32th. Find maximum number from 3 number without using any function.

# Taking input from user.
n1 = int(input("Enter the first number: "))
n2 = int(input("Enter the second number: "))
n3 = int(input("Enter the third number: "))

# Checking conditions.
if n1 > n2:
  if n1 > n3:
    print (n1,"Is a Maximum Number.")
elif n2 > n3:
  print (n2,"Is a Maximum num.")
else:
  print (n3,"Is a Maximum num.")


# _________________---__________________---___________________#
#33th. Find minimum number from 3 number without using any function.

# Taking input from user.
n1 = int(input("Enter the first number: "))
n2 = int(input("Enter the second number: "))
n3 = int(input("Enter the third number: "))

# Checking conditions.
if n1 < n2:
  if n1 < n3:
    print (n1,"Is a Minimum Number.")
elif n2 < n3:
  print (n2,"Is a Minimum num.")
else:
  print (n3,"Is a Minimum num.")

  

#----------------\\|0|//---------------------#
#34th. Find area of circle using function.

import math #define library
#print(float(math.pi)) #3.141592653589793

# func. defination.
def Area(r):
print("Area of the circle =",(math.pi * r ** 2))

# Taking input from user.
R = float(input("Enter the Radius of circle in centimeter:") )

Area(R) # function calling.



#----------------\\|0|//---------------------#
#35th. Find Perimeter of circle using function.

import math #define library

# func. defination.
def Circumference(rad):
  return c = 2 * math.pi * rad #FORMULA #func. Returning value.
  
# Taking input from user.
rad = float(input("Enter the Radius of circle in centimeter:"))

# function calling.
c = Circumference (rad) #Returned value assigned to global var.

print ("Circumference of circle :",c)


#----------------\\|0|//---------------------#
# 36th. Area and Perimeter of the Rectangle or Square.

l = float(input('Enter the Length: '))
b = float(input ('Enter the Width: '))

def OPREC (i,b):
  are = l * b
  peri = 4 * (l * b)
  print("\nArea of the Rectangle:",are ,"sqcm.")
  print ("\nPerimeter of Rectangle:",peri ,"cm.")
  
OPREC(l,b)   # function call


def OPSQR (l):
  aos = 4 * l # area of square
  pos = l**2  #(l * l) perimeter of square
  return aos  
  return pos  #return pos,aos>>>>(304.00, 34.00)
  
# func. call & assigning to the variable.
peri_of_sqr = OPSQR(l)  #return aos
are_of_sqr  = OPSQR(l)  #return pos

# displaying answer.
print("\nArea of Square: ",are_of_sqr,"cmsq.")
print("\nPerimeter of Square: ",peri_of_sqr,"cm.")


#----------------\\|0|//---------------------#
#37th. write a program to whether the given string id palindrom or not.

s = input ("Enter the string: ") #s : string
rev = s[::-1] # rev : reverse

if ( rev == s ):
  print ("Given string is palindrom.")
else:
  print ("Given string is NOt Palindrom.")

"""#close program.  

#----------------\\|0|//---------------------#
#38th.Program to Find Number of VOWELs in the string.