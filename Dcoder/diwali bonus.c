#include <stdio.h>
#include <conio.h>
/*in this program tell me whats wrong? 
i want to give double input, but compiler don't ask that.
i don't know whats problems there.*/

int main()
{
  char employ;
  char gender;
  printf ("are you employee ? \n");
  scanf ("%c",&employ);
  printf ("my ans is %c\n",employ);
  //""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
  clrscr ();
  //............................................................
  if (employ == 'y' || employ == 'Y')
  {
    printf ("what is your gender ? \n");
    scanf ("%c",&gender);
    printf ("ANSWER ENTER HERE: %c \n",gender);
    if (gender=='f' || gender == 'F')
        
          printf ("CONGRATULATIONS..! \n YOU GOT 20% BONUS OF YOUR SALARY.\n");
        
    else if (gender =='m'||gender =='M')
        
          printf ("Congratulations...!\n you got 15% bonus of your salary.\n");
        
        else 
        printf ("wrong answer.") ;
  
  } 
  else // main els STATEMENT 
  printf ("sorry");
  
  getch ();
  return 0;
}