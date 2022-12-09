#include <stdio.h>
#include <conio.h>
#include <string.h>
#define p printf 
#define s scanf

//Compiler version gcc 6.3.0
// something new.
  
void main()

{
 
  char fullname[100];
  p ("\t\t\t\tENTER YOUR NAME:\n");
  fgets (fullname,100,stdin);
  p ("NAME:");
  fputs (fullname,stdout);

//<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>
  int age;
  p ("\n\t\t\t\tEnter Your Age:\n");
  s ("%i",&age);
  p ("AGE:%i\n",age);
  
//><><><><><><><><><><><><><><><><><><><><><><><><><
  char month[20];
  int day;
  int year;
  p ("\t\t\t\t\nENTER YOUR BIRTHDAY DATE:");
  s ("%i %s %i",&day,&month,&year);

//-------------------------------------------------
  /* birthday date: give input alpha-numerical form. 
  For Example., 12_april_2020 [( _ ) underscores means space ]
  (ddmmyy) date-month-year */
//-------------------------------------------------
  p ("\t\t\t\tBIRTHDAY DATE: %i-%s-%i (dd-mm-yyyy)\n",day,month,year);
clrscr ();

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  long monum;
  p ("\t\t\t\t\nENTER YOUR MOBILE NO.:");
  s ("%ld",&monum);
  p ("PHONE: +91%ld\n",monum);
   
/////////////////////////////////////////////////////////////////////////  
  
  char clg[512];
  char op;
  p ("\t\t\t\t(choose any one option, press any one-->'a','A','b','B' )WHAT IS YOUR COLLEGE NAME ?\n (A)\t\t\t\t PUNE VIDYARTHI GRIHAS COLLEGE OF SCIENCE AND TECHNOLOGY \n (B)\t\t\t\tOther");
/* ENTER (B) FOR OTHER COLLEGE */
  s ("\t\n\t\t%c",&op);
  switch (op)
  {
    case 'A':'a'; {
      p ("\t\t\t\tPune Vidyarthi Grihas College Of Science And Technology\n");
      break;      }
              
    case 'B':'b'; {
      p ("\t\t\t\tEnter your College Name");
      s ("%s",&clg);
      p ("college name:%s",clg);
      break;      }
      
    default:  {
      p ("wrong entry..!");
              }
  }
//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>

  p("\n\n\nmy name is");
  fputs (fullname,stdout);
  p("\nmy age is:%i\n",age);
  p("my BIRTHDAY date is %i-%s-%i.\n",day,month,year);
  p("my mobile number is: o0%ld\n",monum);
  p("my college name is ");
  getch ();
  return 0;
}