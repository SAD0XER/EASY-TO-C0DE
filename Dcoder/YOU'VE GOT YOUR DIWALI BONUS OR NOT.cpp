#include <stdio.h>

// first enter yes or no.

// secondly enter male or female.
  
#define p printf
#define s scanf

int main()
{
  char employ;
  char gender;
  
  p ("Are you Employee?\n");
  s ("%s",&employ);
     
if (employ=='y' || employ=='Y')
{
     
     
    p ("what is your gender\n");
    s ("%s",&gender);
  
    if (gender=='f' || gender=='F')
    {
      p ("you got 30% bonus\n");
    }
    else if (gender =='M' ||  gender == 'm')
    {
      p ("you got 20% bonus\n");
    }
     else 
    {
      p ("wrong entry.");
    }
    
}

else if (employ=='n' || employ=='N')
    
    {
      p (" u r not part of my companies. ");
    }
    
    else 
    
    {
      p ("wrong entry.\n");
    }
  return 0;
}