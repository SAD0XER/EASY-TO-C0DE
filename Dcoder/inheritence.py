#python 3.7.1

import math #defining math module.

class Polygon:  #parent class.
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    def inputSides(self):
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]
        self.a = float (input ('ENTER THE THE VALUE OF THE RADIUS: '))

    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is",self.sides[i])

class Triangle(Polygon):
    def __init__(self):
        Polygon.__init__(self,3)

    def findArea(self):
        a, b, c = self.sides
        # calculate the semi-perimeter
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('The area of the triangle is %0.2f' %area)

class Square(Polygon):
   
  def findarea(self):
    self.a = a
    #calculate square side.
    s = 4 * a
    print ("THE PERIMETER OF THE SQUARE IS %0.2f.\n",s)

# rectangle, circle, square

#t = Triangle() 
#t.inputSides() 
#t.dispSides() 
#t.findArea()
r = Square() 
r.inputSides()
r.findarea()