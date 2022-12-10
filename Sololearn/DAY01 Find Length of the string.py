#this is my day_1 code.
# Q. Define a function that computes the length of a given list or string.
print ("This is Day 1 of the 30D30Ch.\nQ. Define a function that computes the length of a given list or string.\n______________________________")
def len_of_str(str):
  temp = len(str)
  return temp

#taking input from user.
string = input('Enter your any string: ')
print (string)
#function calling.
print ("\nThe length of the string is ",len_of_str(string),'.')
