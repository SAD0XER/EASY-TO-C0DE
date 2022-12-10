#30DAYS30CODE CHALLENGE.
#DAY07
#PROGRAM NAME: CONSTRUCTOR IN PYTHON.
#DATE: 14/10/2021
#PROGRAMMER: PARAC0DER
#-----------------–----------------------–------------------------#

class animal():
    
    #creating constructor.
    def __init__(self,name):
        self.name= name
        print("hello, my pet name is ",self.name,".")
    
    def petsound(seld,sound):
        if sound == 'meyao':
            name = input("Enter your cat name: ")
            print ("\n\nMY cat name is {0}.\nMy cat sounds like {1}.".format(name,sound))
        
        elif sound == 'bhobho':
            name = input("Enter your dog name: ")
            print ("\n\nMy dog Barks like ",sound)
#----------------------------------------
#driver code.
#creating instanse of the class.
mody = animal("shantabai") #mody is a name of the object.
sound1 = input ('\nEnter your pet sound:\n')
mody.petsound(sound1)

#  IMPORTANT NOTE:   #
#1. Give input exact like "meyao" or "bhobho".
#2. Then enter your cat name if you entered already "meyao", otherwise enter your dog name if you enter "bhobho".
#3. And see what is happen. :)
