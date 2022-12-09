#python 3.7.1
import math #importing the maths module.

class Areas: #create a class

  def area_of_circle(sad, radius):
    return (math.pi * (radius ** 2))
  
  def area_of_square(sad, side):
    return side ** 2
    
A = Areas()
c = A.area_of_circle(34)
s = A.area_of_square(5)

print ('The area of the cirle is ',c)
print ('The area of the square is ',s)