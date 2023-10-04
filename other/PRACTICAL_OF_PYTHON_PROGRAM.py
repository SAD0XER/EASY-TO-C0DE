Link of the Decoder: https://code.dcoder.tech/files/code/613f63f7018ddb060c75bcbb/practical_of_python_program
Name: @para_coder
Version of the python 3.7.1

#PRACTICALS OF PYTHON PROGRAMMING.
"""
#PRACTICAL NUMBER - 1
#A. Create a program that asks the user to enter their name and their age.
#Print out a message addressed to them that tells them the year that they will turn 100 years old.
# ANS:
  
print ("<<<<<<<<<<<TELL ME YOUR AGE;\n<<<<<<<<<<<I WILL TELL YOU WHEN YOU WILL BECOME 100 YEAR OLD.>>>>>>>>>>>>")
age = int (input ("\n\nEnter your Age:"))
U = 100 - age
print ("\nAfter the {0} Years, You will become 100 year old.".format(U))


#B. Enter the number from the user and depending on whether the number is even or odd,
#print out an appropriate message to the user.
#ANS:

print ("ENTER YOUR NUMBER,\nTHEN I WILL TELL YOU WEATHER YOUR NUMBER IS EVEN OR ODD.")
N = int (input ("\n\nEnter your number: "))
if (N % 2 == 0):
  print ("\nYour number is EvEN.")
else:
  print ("\nYour number is Odd.")


#C. Write a Program to generate the Fibonacci series.
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


#D. Write a function that reverses the user defined value(numbers\string).

def reverse(v):
  r = list(v) # converting into list.
  r1 = [-1:]
  print (r1)

    
v = int (input ("Enter your value: "))
reverse(v) #function calling.

≠==========================={=========={{=

def isvowel(char):
  vowel = ['A','E','I','O','U','a','e','i','o','u']
  for c in vowel:
    if (c == char):
      print ("True")
    else:
      print ("False")
#end of isvowel() function.

Char = input("\nEnter one character:")
r = isvowel(Char) #function calling.
#print (r)


#======================

a = [1,1,2,3,5,8,13,21,24,55,89]
prin = [i for i in a if i<5]
print (prin)
#=========================
A=[1,2,3,4,5,6,7,8,9,10]
B=[11,12,9,13,14,15,6,1]
for a in A:
  for b in B:
    if a==b:
      print ("True")
      
#=========================
  
d = {1:3, 2:6, 3:5 ,4:9 ,5:4, 6:2, 7:18, 8:10, 9:3, 10:5}
sum = 0
for s in d:
  sum += d[s]
print (sum)

#=============================
x = input("Enter Whatever you want:")
x2 = x.replace('.', '')
if x2.isdigit():
   try:
      y = int(x)
      del x
      x = y
      del y
   except:
      print("You entered a floating point number.")
      del x
      x = 0
print("x =", x)
"""
