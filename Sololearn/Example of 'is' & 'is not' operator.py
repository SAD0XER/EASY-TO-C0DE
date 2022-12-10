#12th. Example of 'is' and 'is not' operator.
//!!!!!!!!!!!!!!!!!!!!
"""
This is an identity Operator.

====Explaination====

=> This operator same as assignment operator.

=> 1. "is" operator is same as equal to sign( = ).

=> 2. "is not" operator is same as not equal to operator(!=).
"""


# same values assigning
x = 5
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
#====================

print ('new line.\n\n')


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
