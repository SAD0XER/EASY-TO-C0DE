#30DAYS30CODE CHALLENGE.
#DAY04
#DATE:11\10\2021
#PRACTICE OF CLASS AND OBJECT.
========================================

#creating a class.
class dog:
    #class variable \ class attribute
    att1= 'sarvesh'
    att2= 'SarveshKumar Nasare'
    
    #class method.
    def display(self):
        print ("Hello, my name is ",self.att1)
        print ("Hello, my Friend name is ",self.att2)
========================================

# DRIVER CODE.

#creating object.
mody= dog()

#accessing the methods of class.
mody.display()