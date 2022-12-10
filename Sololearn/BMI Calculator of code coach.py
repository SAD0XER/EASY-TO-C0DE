"""
This is the Program of python BMI Calculator.

•AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>

•PURPOSE: PACTICE

•DATE: 18\07\2021

•PROGRAM NAME: BMI Calculator.
"""

# TAKING AN INPUT FROM USER.

weight = int(input())
height = float(input())
#-------------------------------------------
# FORMULA OF BMI.

BMI = weight / height**2
#-------------------------------------------
# FINDING RESULT.

if (BMI < 18.5):
  printprint ("Underweight")

elif (BMI >= 18.5) and (BMI < 25):
  print ("Normal")

elif (BMI >= 25) and (BMI < 30):
  print ("Overweight")

elif (BMI >= 30):
  print ("Obesity")